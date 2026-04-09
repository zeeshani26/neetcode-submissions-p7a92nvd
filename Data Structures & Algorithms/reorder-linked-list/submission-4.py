# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:

        curr = head
        l = 0
        while curr:
            curr = curr.next
            l += 1

        mid = -(l//-2)

        newL = 0
        newCurr = head
        prevMid = None
        while newL != mid:
            prevMid = newCurr
            newCurr = newCurr.next
            newL += 1
        prevMid.next = None
        prev = None

        while newCurr:
            nxt = newCurr.next 
            newCurr.next = prev
            prev = newCurr
            newCurr = nxt
        
        h1 = head
        h2 = prev

        while h1 and h2:
            tmp1 = h1.next
            h1.next = h2
            h1 = tmp1
            tmp2 = h2.next
            h2.next = h1
            h2 = tmp2

        
            
            


        

        
        