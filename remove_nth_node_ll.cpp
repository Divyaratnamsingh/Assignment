class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def remove_nth_from_end(head, n):
    dummy = ListNode(0)
    dummy.next = head
    first = dummy
    second = dummy

    # Move first n+1 steps ahead to create a gap of n nodes
    for _ in range(n + 1):
        first = first.next

    # Move both pointers until first reaches the end
    while first:
        first = first.next
        second = second.next

    # Delete the n-th node from the end
    second.next = second.next.next

    return dummy.next

# Helper: Create linked list from list
def create_list(vals):
    if not vals:
        return None
    head = ListNode(vals[0])
    current = head
    for val in vals[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

# Helper: Print linked list
def print_list(head):
    while head:
        print(head.val, end=" ")
        head = head.next
    print()

def main():
    values = [1, 2, 3, 4, 5]
    head = create_list(values)
    n = 2

    print("Original List:")
    print_list(head)

    head = remove_nth_from_end(head, n)

    print(f"List after removing {n}-th node from the end:")
    print_list(head)

if __name__ == "__main__":
    main()
