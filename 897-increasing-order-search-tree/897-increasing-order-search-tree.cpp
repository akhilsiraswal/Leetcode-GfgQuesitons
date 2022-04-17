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
    void traversal(TreeNode *root,vector<int> & values){
        if(!root) return;
        
        traversal(root->left,values);
        values.push_back(root->val);
        traversal(root->right,values);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> values;
        traversal(root,values);
        TreeNode* result=NULL,*itr=NULL;
        for(auto i:values){
            if(!result){
                TreeNode*temp  = new TreeNode(i);
                result = temp;
                itr=result;
                
            }else{
                TreeNode* t=new TreeNode(i);
                itr->right = t;
                itr=itr->right;
            }
        }
        return result;
    }
};