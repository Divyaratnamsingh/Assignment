class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

def merge_two_lists(l1, l2):
    dummy = ListNode(0)
    current = dummy

    while l1 and l2:
        if l1.val < l2.val:
            current.next = l1
            l1 = l1.next
        else:
            current.next = l2
            l2 = l2.next
        current = current.next

    current.next = l1 if l1 else l2
    return dummy.next

# Helper to create a linked list from a list
def create_list(arr):
    if not arr:
        return None
    head = ListNode(arr[0])
    current = head
    for val in arr[1:]:
        current.next = ListNode(val)
        current = current.next
    return head

# Helper to print a linked list
def print_list(head):
    while head:
        print(head.val, end=" ")
        head = head.next
    print()

def main():
    l1 = create_list([1, 2, 4])
    l2 = create_list([1, 3, 4])

    merged_list = merge_two_lists(l1, l2)

    print("Merged Linked List:", end=" ")
    print_list(merged_list)

if __name__ == "__main__":
    main()
