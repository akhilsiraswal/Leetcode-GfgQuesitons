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
    void traverse(TreeNode*root,unordered_map<int,int>*mp){
        if(!root) return;
        (*mp)[root->val]++;
        traverse(root->left,mp);
        traverse(root->right,mp);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int>result;
        if(!root) return {};
       unordered_map<int,int>mp;
        traverse(root,&mp);
        int mx=INT_MIN;
        for(auto i:mp) {
            if(i.second > mx) mx = i.second;
            
            // cout<<i.first<<" "<<i.second<<endl;
            
        }
        
        for(auto i:mp){
            if(i.second == mx){
                result.push_back(i.first);
            }
        }
        return result;
        
        
    }
};