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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int carry=0;
        
        ListNode * result,*temp=NULL;
        while(l1&&l2){
            int sum = l1->val+l2->val;
        
            if(!temp){
                temp = new ListNode((sum + carry)%10); 
                result = temp;
                
            }else{
                ListNode * t = new ListNode((sum + carry)%10);
                temp->next = t;
                temp=t;
                // temp=temp->next;
                
            }
            
            if(sum+carry>9) carry=1;
            else carry=0;
            
            l1=l1->next;
            l2=l2->next;
        }
        
            
        while(l1){
            int sum=l1->val;
            
            ListNode *t = new ListNode((sum+carry)%10);
            temp->next = t;
            temp=t;
            l1=l1->next;
            if(sum+carry > 9) carry=1; else carry=0;
        }
        while(l2){
            int sum=l2->val;
            
            ListNode *t = new ListNode((sum+carry)%10);
            temp->next = t;
            temp=t;
            l2=l2->next;
            
            if(sum+carry > 9) carry=1; else carry=0;
            
        }
        
        if(carry){
            ListNode *t = new ListNode(carry);
            temp->next = t;
            temp=t;
        }
        
        
        
        return result;
        
        
        
        
        
        
    }
};