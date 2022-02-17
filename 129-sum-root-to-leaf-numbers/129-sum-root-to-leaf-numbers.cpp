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
    int sum=0;
    
    void function(TreeNode *root,int number){
        if(!root){
            return;
        }
        
        number = number *10+root->val;
        if(!root->left && !root->right){
            // cout<<number<<" ";
            sum+=number;
            number = 0;
        }
        
        
        function(root->left,number);
        function(root->right,number);
        
    }
    
    int sumNumbers(TreeNode* root) {
        function(root,0);
        return sum;
    }
};