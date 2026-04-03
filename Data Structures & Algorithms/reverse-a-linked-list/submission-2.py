# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = None
        prev = None
        front = head

        while front != None:
            curr = front
            front = front.next
            curr.next = prev
            prev = curr
        
        return curr