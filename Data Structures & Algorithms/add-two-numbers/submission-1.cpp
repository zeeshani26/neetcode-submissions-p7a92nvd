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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Brute force, convert to array operate > convert to linked list
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy; 
        int count = 0;
        while(l1!=nullptr && l2!=nullptr){
            int sum = l1->val + l2->val + count;
            cout<<sum<<" "<<count<<"\n";
            if(count>0){
                count--;
            }
            if(sum>9){
                sum %= 10;
                count++;
            }
            curr->next = new ListNode(sum);
            curr = curr->next;
            l1 = l1->next;
            l2 = l2->next;
            cout<<count;
        }
        
        if(l1){
            while(l1){
                int sum = l1->val + count;
                if(count>0){
                    count--;
            }
            if(sum>9){
                sum %= 10;
                count++;
            }
                curr->next = new ListNode(sum);
                curr = curr->next;
                l1 = l1->next;
            }
            
        }
        else if(l2){
             while(l2){
                int sum = l2->val + count;
                if(count>0){
                    count--;
            }
            if(sum>9){
                sum %= 10;
                count++;
            }
                curr->next = new ListNode(sum);
                curr = curr->next;
                l2 = l2->next;
            }
        }
            if(count>0){
                curr->next = new ListNode(1);
                curr = curr->next;
            }
        
        ListNode *head = dummy->next;
        delete dummy;
        return head;
    }
};
