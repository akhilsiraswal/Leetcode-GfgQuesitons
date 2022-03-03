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
    
    int sum(TreeNode*root){
        if(!root) return 0;
        int lsum = sum(root->left);
        int rsum = sum(root->right);
        result += abs(lsum-rsum);
        return lsum+rsum+root->val;
        // return sum(root->left)+sum(root->right)+root->val;
    }
    int result=0;
    int findTilt(TreeNode* root) {
        if(!root) return 0;
        // result+=abs(sum(root->left)-sum(root->right));
        // findTilt(root->left);
        // findTilt(root->right);
            sum(root);
        return result;
    }
};