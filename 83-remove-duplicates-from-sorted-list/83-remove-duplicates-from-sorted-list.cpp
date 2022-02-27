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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode*prev=NULL,*current=head;
        while(current){
            int flag=0;
            while(current && prev && (prev->val == current->val)){
                current=current->next;
                flag=1;
            }
            if(flag){
                prev->next=current;
            }else{
                prev=current;
                current=current->next;
            }
        }
        return head;
    }
};