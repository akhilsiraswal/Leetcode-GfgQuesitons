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
    ListNode* swapPairs(ListNode* head) {
        if(!head) return head;
        if(!head->next) return head;
        ListNode *slow=head,*fast=head->next;
        while(fast){
            swap(slow->val,fast->val);
             slow=slow->next;
            if(slow) slow=slow->next;
            fast=fast->next;
            if(fast) fast=fast->next;
            // if(fast) fast=fast->next;
        }
        return head;
    }
};