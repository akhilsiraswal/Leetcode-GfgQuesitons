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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    TreeNode*helper(int start,int end,vector<int>v){
        if(start>end) return NULL;
        
        int mid = start+(end-start)/2;
        TreeNode*t = new TreeNode(v[mid]);
        if(start == end) return t;
        
        t->left = helper(start,mid-1,v);
        t->right = helper(mid+1,end,v);
        
        return t;
        
    }
    
    
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>v;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        
        return helper(0,v.size()-1,v);
    }
};