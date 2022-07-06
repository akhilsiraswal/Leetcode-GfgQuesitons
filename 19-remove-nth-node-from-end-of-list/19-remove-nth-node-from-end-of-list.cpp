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
    
    int length(ListNode *head){
        if(!head) return 0;
        return 1+length(head->next);
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       int nn = length(head);
        nn = nn-n;
        
        ListNode *prev=NULL,*curr = head;
        
        for(int i=0;i<nn;i++){
            prev = curr;
            curr = curr->next;
        }
        
        if(!prev) return head->next;
        
        prev->next = curr->next;
        return head;
        
    }
};