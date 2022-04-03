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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> result;
        int level=0;
        vector<int> temp;
        if(!root) return result;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            root = q.front();
            q.pop();
            if(!root){
                level++;
                if(level%2==0) reverse(temp.begin(),temp.end()); 
                result.push_back(temp);
                temp.clear();
                if(!q.empty()) q.push(NULL);
            }else{
                    temp.push_back(root->val);
                    if(root->left) q.push(root->left);
                    if(root->right) q.push(root->right);
            }
        }
        return result;
    }
};