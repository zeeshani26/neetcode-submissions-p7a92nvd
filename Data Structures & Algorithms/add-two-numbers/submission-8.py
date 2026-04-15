# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        curr1 = l1
        curr2 = l2
        
        extra = 0
        dummy = ListNode(0)
        ans = dummy
        while curr1 or curr2:
            if curr1 and curr2:
                sum_dig = curr1.val + curr2.val + extra
                curr1 = curr1.next
                curr2 = curr2.next
            elif curr1:
                sum_dig = curr1.val + extra
                curr1 = curr1.next
            elif curr2:
                sum_dig = curr2.val + extra
                curr2 = curr2.next
            if sum_dig > 9:
                extra = 1
            else:
                extra = 0

            
            newNode = ListNode((sum_dig%10))

            ans.next = newNode
            ans = ans.next
            

        if extra:
                newNode = ListNode(1)
                ans.next = newNode
        
        return dummy.next




            
