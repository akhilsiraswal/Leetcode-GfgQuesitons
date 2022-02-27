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
    
    void findMax(TreeNode*root,int *val){
        if(!root) return ;
        *val = max((*val),root->val);
        findMax(root->left,val);
        findMax(root->right,val);
        return;
    }
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        TreeNode*temp;
        if(!root) return root;
        else if(key<root->val) root->left = deleteNode(root->left,key);
        else if(key>root->val) root->right = deleteNode(root->right,key);
        else{
            
            if(root->left && root->right){
                // temp = find
                int val=INT_MIN;
                findMax(root->left,&val);
                root->val = val;
                root->left = deleteNode(root->left,root->val);
            }else{
                temp = root;
                if(!root->left){
                    root = root->right;
                }
            else if(!root->right) root = root->left;
                
                delete temp;
            }
            
        }
        
        return root;
        
        
    }
};