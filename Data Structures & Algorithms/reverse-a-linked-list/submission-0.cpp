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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode *current = head;
        ListNode *prev = nullptr;
        ListNode *nex = head->next;
        while(nex!=nullptr){
            current->next = prev;
            prev = current;
            current = nex;
            nex = nex->next;
        } 
        current->next = prev;
        return current;
    }
};
