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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *tmp1 = list1;
        ListNode *tmp2 = list2;
        ListNode *head = nullptr;
        if(tmp1== nullptr){
            return list2;
        }
        else if(tmp2==nullptr){
            return list1;
        }
        if(tmp1->val > tmp2->val){
            head = tmp2;
            tmp2 = tmp2->next;
        }
        else{
            head = tmp1; 
            tmp1 = tmp1->next;
        }
        ListNode *current = head;
        while(tmp1!=nullptr && tmp2!=nullptr){
            if(tmp2->val < tmp1->val){
                current->next = tmp2;
                tmp2 = tmp2->next; 
            }
            else{
                current->next = tmp1;
                tmp1 = tmp1->next;
            } 
            current=current->next; 
        } 
        if(tmp2!=nullptr){
            current->next = tmp2;
        }
        else{
            current->next = tmp1;
        }
        return head;;
    }
};
