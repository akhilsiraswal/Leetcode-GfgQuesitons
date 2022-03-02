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
    
    int mx=0;
    
    void traverse (TreeNode*root,int nodes){
        if(!root) return;
        mx = max(mx,nodes);
        traverse(root->left,nodes+1);
        traverse(root->right,nodes+1);
    }
    
    
    int maxDepth(TreeNode* root) {
        traverse(root,1);
        return mx;
    }
};