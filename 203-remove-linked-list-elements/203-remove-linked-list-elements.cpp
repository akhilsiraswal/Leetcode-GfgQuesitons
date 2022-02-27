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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*prev=NULL,*current=head;
        while(current){
            int flag=0;
            while(current && current->val == val){
                current=current->next;
                flag=1;
            }
            if(flag){
                if(!prev){
                    head=current;
                }else{
                    prev->next = current;
                }
            }else{
                prev=current;
                current=current->next;
            }
        }
        return head;
    }
};