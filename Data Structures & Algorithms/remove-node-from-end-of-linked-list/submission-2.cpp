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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr && n==1){
            return nullptr;
        }
        ListNode* curr = head;
        ListNode* prev = nullptr;

        int count = 1; 
        while(count<n){
            curr = curr->next;
            count++;
        }
        while(curr->next!=nullptr){
            curr = curr->next;
            if(!prev){
                prev = head;
            }
            else{
                prev = prev->next;
            }
        }
        if(!prev){
            head = head->next;
        }
        else{
            prev->next = prev->next->next; 
        }
        return head;
    }
};
