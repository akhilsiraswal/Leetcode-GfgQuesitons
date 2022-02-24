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
    ListNode* sortList(ListNode* head) {
        ListNode*temp=head;
        map<int,int>mp;
        while(temp){
            mp[temp->val]++;
            temp=temp->next;
        }
        temp=head;
        for(auto i:mp){
            while(i.second!=0){
                temp->val = i.first;
                temp=temp->next;
                i.second--;
            }
        }
        return head;
        
        
    }
};