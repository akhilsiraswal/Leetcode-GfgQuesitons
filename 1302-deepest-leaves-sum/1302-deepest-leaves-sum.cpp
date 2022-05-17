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
    
    int height(TreeNode*root){
        if(!root) return 0;
        
        int left = height(root->left);
        int right = height(root->right);
        return max(left,right) +1 ;
        
    }
    
    
    int deepestLeavesSum(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode *> q;
        q.push(root);
        int h = height(root),level=0,res=0;
        while(!q.empty()){
            int n = q.size();
            level++;
            int sum=0;
            for(int i=1;i<=n;i++){
                TreeNode *node = q.front();
                q.pop();
                sum+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(level == h ) res = sum;
        }
        return res;
        
        
    }
};