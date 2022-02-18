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
    
    string st="";
    vector<string>result;
    
    
    void bruteForce(TreeNode *root,vector<string>*result,string st){
        if(!root) return;
        
        if(!root->left && !root->right){
            st+=to_string(root->val);
            (*result).push_back(st);
            st="";
            
        }else {
            st+=to_string(root->val);
            st+="->";
        }
        
        bruteForce(root->left,result,st);
        bruteForce(root->right,result,st);
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string>result;
        bruteForce(root,&result,"");
        return result;
    }
};