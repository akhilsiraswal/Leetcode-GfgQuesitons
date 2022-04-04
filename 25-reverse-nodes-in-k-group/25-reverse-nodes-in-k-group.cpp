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
    bool hasKNodes(ListNode * head,int k){
        int count=0;
        ListNode *ptr = head;
        while(ptr && count<=k) {ptr=ptr->next;count++;}
        
        return count>=k;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode*ptr=head,*prev=NULL,*next=NULL;
        if(hasKNodes(ptr,k)){
            ptr = head;
            while(ptr && count<k){
                next = ptr->next;
                ptr->next = prev;
                prev = ptr;
                ptr = next;
                count++;
            }
            if(next) head->next = reverseKGroup(next,k);
            return prev;
            
                
            
        }
        return head;
    }
};