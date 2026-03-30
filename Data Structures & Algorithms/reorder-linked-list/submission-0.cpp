/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* l1 = head;
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }

        ListNode* secondListStarts = slow->next;
        // severing connection in middle 
        ListNode* prev = nullptr;
        ListNode* curr = secondListStarts;
        slow -> next = nullptr;
        // Reversing second half now
        while(curr){
            ListNode* nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        ListNode* l2 = prev;
        
        // Now take one node from each
        while(l2){
            // take from first list
            ListNode* tmp1 = l1->next;
            ListNode* tmp2 = l2->next;

            l1->next = l2;
            l1 = tmp1;
            l2->next = l1;
            l2 = tmp2;
        }
        
    }
};
