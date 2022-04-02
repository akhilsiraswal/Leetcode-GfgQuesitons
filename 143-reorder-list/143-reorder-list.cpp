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
    
    
    
    void reorderList(ListNode* head) {
        vector<int>temp1,temp2;
        ListNode*t = head;
        while(t){
            temp1.push_back(t->val);
            t=t->next;
        }
        
        int l=0,h=temp1.size()-1;
        while(l<=h){
            if(l==h){
                temp2.push_back(temp1[l++]);
            }else{
                
                temp2.push_back(temp1[l++]);
                temp2.push_back(temp1[h--]);
            }
        }
        
        for(int i=0;i<temp2.size();i++){
            head->val = temp2[i];
            head=head->next;
        }
        
        
        
        
    }
};