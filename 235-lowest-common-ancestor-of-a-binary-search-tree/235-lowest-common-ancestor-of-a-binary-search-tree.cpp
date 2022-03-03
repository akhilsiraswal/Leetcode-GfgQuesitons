/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode *l,*r;
        if(!root) return root;
        if(root == p || root == q) return root;
        
        l = lowestCommonAncestor(root->left,p,q);
        r = lowestCommonAncestor(root->right,p,q);
        if(l && r) return root;
        
        return (l?l:r);
    }
};