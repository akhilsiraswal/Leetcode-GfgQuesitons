/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
/*
    
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode*slow=head,*fast=head;
        while(fast){
            slow=slow->next;
            fast=fast->next;
            if(fast) fast=fast->next;
            if(fast && fast == slow)return true;
        }
        return false;
    }
*/
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        ListNode *prev=head,*curr = head->next;
        
        while(curr){
            if(curr == prev) return true;
            curr = curr->next;
            prev = prev->next;
            if(curr) curr = curr->next;
        }
        return false;
    }
};