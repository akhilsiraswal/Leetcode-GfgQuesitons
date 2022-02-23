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
    int count=0;
    void sum(TreeNode*root,int targetSum,int sm){
        if(!root ) return ;
        
        sm+=root->val;
        if(sm == targetSum){
            count++;
            // return;
        }
        // if(sm>targetSum) return;
        sum(root->left,targetSum,sm);
        sum(root->right,targetSum,sm);
        
    }
    
    
    int pathSum(TreeNode* root, int targetSum) {
        if(!root) return count;
        
        sum(root,targetSum,0);
        // cout<<count<<" "<<root->val<<endl;
        int c1 = pathSum(root->left,targetSum);
        int c2 = pathSum(root->right,targetSum);
        // count=0;
        return count;
    }
};