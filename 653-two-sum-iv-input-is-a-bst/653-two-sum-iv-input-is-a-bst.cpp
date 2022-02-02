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
    map<int,int>mp;
    void traverse(TreeNode *root){
        if(!root) return ;
        
        traverse(root->left);
        mp[root->val]++;
        traverse(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        traverse(root);
        for(auto i:mp){
            mp[i.first]=0;
            if(mp[k-i.first]!=0) return true;
        }
        return false;
        
        
        
    }
};