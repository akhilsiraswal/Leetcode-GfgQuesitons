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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode*prev=NULL,*current=head,*next = head->next;
        while(next){
            if(current->val == next->val){
                while(next && next->val == current->val) next = next->next;
                
                if(head == current){
                    head = next;
                    current=head;
                }else{
                    prev->next =next;
                    current = next;
                }
                    if(next) next = next->next;
                    
                
            }
            else{
                prev = current;
                current=current->next;
                next = current->next;
            }
        }
        return head;
        
    }
    */
     ListNode* deleteDuplicates(ListNode* head) {
         if(!head) return head;
         ListNode*prev=NULL,*current=head,*next=head->next;
         
         while(current){
             while( next && next->val == current->val) next=next->next;
             if(current->next!=next){
                 if(prev){
                     prev->next = next;
                 }else{
                    head=next;
                     
                 }
                 current=next;
                if(next) next=next->next;
                 
             }else{
                 prev = current;
                 current=current->next;
                 if(next) next=next->next;
             }
             
             
             
         }
         return head;
         
     }
};