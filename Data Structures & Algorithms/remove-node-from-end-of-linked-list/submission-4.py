# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        prev = None
        curr = head

        while n!=0:
            curr = curr.next
            n -= 1

        while curr!=None:
            curr = curr.next
            if prev:
                prev = prev.next
            else:
                prev = head
        if prev==None:
            if head.next:
                return head.next
            else:
                return None
        
        prev.next = prev.next.next
        return head