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

    ListNode* reverseList(ListNode* head) {
        
        ListNode*prev=NULL,*current=head,*next=NULL;
        while(current){
            next = current->next;
            current->next = prev;
            prev=current;
            current=next;
        }
        return prev;
        
    }
    */
     ListNode* reverseList(ListNode* head) {
         ListNode *prev=NULL,*next,*curr = head;
         
         while(curr){
             next = curr->next;
             curr->next = prev;
             prev = curr;
             curr = next;
         }
         head = prev;
         
         return head;
     }
};