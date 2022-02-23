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
    
  void  traverseSum(TreeNode*root,int *val){
        if(!root) return;
        (*val)+=root->val;
        traverseSum(root->left,val);
        traverseSum(root->right,val);
    }
    vector<int>result;
    unordered_map<int,int>mp;
    
    void findAllSum(TreeNode*root){
        if(!root) return;
        int sum=0;
        traverseSum(root,&sum);
        mp[sum]++;
        findAllSum(root->left);
        findAllSum(root->right);
        
    }
    
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        if(!root) return {};
        findAllSum(root);
        int mx=INT_MIN;
        for(auto i:mp) if(i.second>mx) mx = i.second;
        for(auto i:mp) if(i.second == mx) result.push_back(i.first);
        
        return result;
        
    }
};