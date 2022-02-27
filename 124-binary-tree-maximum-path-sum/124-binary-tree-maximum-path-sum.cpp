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
    int maxValue=INT_MIN;
    
    int maxPathSum(TreeNode* root){
        
        int val = maxPathSumRec( root);
        return maxValue;
    }
    
    
    int maxPathSumRec(TreeNode* root) {
        if(!root) return 0;
        
        int leftSum = maxPathSumRec(root->left);
        int rightSum = maxPathSumRec(root->right);
        
        if(leftSum< 0 && rightSum<0){
            maxValue = max(maxValue,root->val);
            return root->val;
        }
        if(leftSum>0 && rightSum>0) {
            maxValue = max(maxValue,root->val+leftSum+rightSum);
        }
        int maxValueUp = max(leftSum,rightSum)+root->val;
        maxValue = max(maxValue,maxValueUp);
        return maxValueUp;
        
    }
};