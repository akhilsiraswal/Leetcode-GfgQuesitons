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
    int result=0;
    void func(TreeNode*root,int low,int high){
        if(!root) return;
        
        if(root->val >=low && root->val <=high) result+=root->val;
        func(root->left,low,high);
        func(root->right,low,high);
        
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        func(root,low,high);
        return result;
    }
};