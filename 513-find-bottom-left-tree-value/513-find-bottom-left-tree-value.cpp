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
    int findBottomLeftValue(TreeNode* root) {
        if(!root) return 0;
        int result=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int tp = q.size();
            for(int i=1;i<=tp;i++){
                TreeNode*t = q.front();
                q.pop();
                if(i==1) result = t->val;
                
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return result;
    }
};