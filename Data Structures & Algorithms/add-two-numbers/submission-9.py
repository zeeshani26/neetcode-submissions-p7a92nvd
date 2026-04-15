# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        extra = 0
        dummy = ListNode(0)
        ans = dummy
        while l1 or l2:
            val1 = l1.val if l1 else 0
            val2 = l2.val if l2 else 0

            total = val1 + val2 + extra

            if total > 9:
                extra = 1
            else:
                extra = 0
            
            newNode = ListNode(total%10)

            ans.next = newNode
            ans = ans.next

            if l1:
                l1 = l1.next
            if l2:
                l2 = l2.next


        if extra:
                newNode = ListNode(1)
                ans.next = newNode
        
        return dummy.next




            
