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
    /*
    int length(ListNode * head){
        if(!head) return 0;
        
        return length(head->next)+1;
        
    }
    
    ListNode* middleNode(ListNode* head) {
        int h = length(head);
        int len = h/2;
        
        for(int i=1;i<=len;i++) head=head->next;
        return head;
        
        // ListNode* temp = head;
        
        
    }
    */
    
    int length(ListNode * head){
        if(!head) return 0;
        return 1+ length(head->next);
    }
    ListNode* middleNode(ListNode* head) {
        ListNode *node=head;
        int n = length(head);
            n = n/2 + 1 ;
        for(int i=1;i<n && node!=NULL ;i++){
            node = node->next;
        }
        return node;
        
    }
};