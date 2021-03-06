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
  
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*result=NULL,*temp=result;
        while(list1 && list2){
            if(list1->val < list2->val){
                    ListNode*t=new ListNode(list1->val);
                if(!result){
                    result=t;
                    temp=result;
                }else{
                    temp->next = t;
                    temp=temp->next;
                }
                list1=list1->next;
            }else{
                ListNode*t=new ListNode(list2->val);
                if(!result){
                    result=t;
                    temp=result;
                }else{
                    temp->next = t;
                    temp=temp->next;
                }
                list2=list2->next;
            }
        }
        
        
        while(list1){
             ListNode*t=new ListNode(list1->val);
                if(!result){
                    result=t;
                    temp=result;
                }else{
                    temp->next = t;
                    temp=temp->next;
                }
                list1=list1->next;
        }
        
        while(list2){
            ListNode*t=new ListNode(list2->val);
                if(!result){
                    result=t;
                    temp=result;
                }else{
                    temp->next = t;
                    temp=temp->next;
                }
                list2=list2->next;
        }
        
        return result;
    }

/*ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    
}
*/
};