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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        ListNode * result=NULL,*t=NULL;
        
        for(ListNode * list:lists){
            ListNode  * temp =list;
            t=result;
            if(!result){
                while(temp){
                    if(!t){
                        ListNode *tt = new ListNode(temp->val);
                        t = tt;
                        result = t;
                    }else {
                        ListNode *tt = new ListNode(temp->val);
                        t->next = tt;
                        t = tt;
                    }
                    temp=temp->next;
                }
            }else{
                ListNode * p = result,*prev=NULL;
                while(p && temp){
                    // cout<<"hehe"<<endl;
                    if(p->val >= temp->val){
                        cout<<p->val<<" "<<temp->val<<endl;
                        if(!prev){
                            ListNode * newNode = new ListNode(temp->val);
                            newNode->next = p;
                            result = newNode;
                            prev = newNode;
                            
                        }else{
                            ListNode * newNode = new ListNode(temp->val);
                            newNode->next = prev->next;
                            prev->next = newNode;
                            prev = newNode;
                            
                        }
                        temp=temp->next;
                    }else {
                        prev = p;
                        p=p->next;
                    }
                }
                p = prev;
                while(temp){
                    ListNode * newNode = new ListNode(temp->val);
                    p->next = newNode;
                    p=newNode;
                    temp = temp->next;
                }
                
                
                
            }
        }
        return result;
        
    }
};