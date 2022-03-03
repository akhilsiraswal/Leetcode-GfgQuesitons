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
    
    bool validBst(TreeNode* root,TreeNode* min,TreeNode* max){
        if(!root) return 1;
        
        if((min!=NULL && root->val <= min->val )||  (max!=NULL && root->val >= max->val)) return 0;
        
        return validBst(root->left,min,root) && validBst(root->right,root,max);
    }
    
    bool isValidBST(TreeNode* root) {
        return validBst(root,NULL,NULL);
    }
};