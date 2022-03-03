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
    
    void traverse(TreeNode*root,vector<int>&temp){
        if(!root) return;
        traverse(root->left,temp);
        temp.push_back(root->val);
        traverse(root->right,temp);
    }
    
    TreeNode* convert(TreeNode*root,unordered_map<int,int>&mp){
        if(!root) return root;
        
        convert(root->left,mp);
        root->val = mp[root->val];
        convert(root->right,mp);
        return root;
        
    }
    
    TreeNode* convertBST(TreeNode* root) {
        vector<int>temp1,temp2;
        traverse(root,temp1);
        temp2 = temp1;
        for(int i=1;i<temp2.size();i++){
            temp2[i] +=temp2[i-1];
        }
        
        unordered_map<int,int>mp;
        for(int i=0;i<temp1.size();i++){
            mp[temp1[i]] = temp2[temp2.size()-1] - temp2[i] +temp1[i];
        }
        
        return convert(root,mp);
        
        
        
        
        
        
    }
};