/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /*
    int length(ListNode *head){ if(!head) return 0; return length(head->next)+1;}
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int n1 = length(headA);
        int n2 = length(headB);
        if(n1>n2){
            n1-=n2;
            for(int i=1;i<=n1;i++) headA=headA->next;
        }else {
            n2-=n1;
            for(int i=1;i<=n2;i++) headB=headB->next;
        }
        
        while(headA && headB){
            if(headA==headB) return headA;
            
            headA=headA->next;
            headB=headB->next;
            
        }
        return NULL;
    }
    
    */
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        unordered_map<ListNode*,int>mp;
        while(headA){
            mp[headA] = headA->val;
            headA=headA->next;
        }
        while(headB){
            if(mp.find(headB) == mp.end()) mp[headB] = headB->val;
            else return headB;
            headB=headB->next;
        }
        return NULL;
        
        
    }
};