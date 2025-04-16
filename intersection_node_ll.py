class ListNode:
    def __init__(self, val):
        self.val = val
        self.next = None

def get_intersection_node(headA, headB):
    if not headA or not headB:
        return None

    a, b = headA, headB

    while a != b:
        a = a.next if a else headB
        b = b.next if b else headA

    return a

def print_list(head):
    while head:
        print(f"{head.val} -> ", end="")
        head = head.next
    print("None")

def main():
    intersect = ListNode(8)
    intersect.next = ListNode(9)

    headA = ListNode(1)
    headA.next = ListNode(2)
    headA.next.next = intersect

    headB = ListNode(3)
    headB.next = intersect

    print("List A: ", end="")
    print_list(headA)
    print("List B: ", end="")
    print_list(headB)

    result = get_intersection_node(headA, headB)

    if result:
        print(f"Intersection at node with value: {result.val}")
    else:
        print("No intersection found.")

if __name__ == "__main__":
    main()
