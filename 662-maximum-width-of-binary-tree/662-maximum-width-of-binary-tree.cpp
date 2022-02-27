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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*,long>>q;
        q.push({root,0});
        int current=0,result=1;
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                pair<TreeNode*,long>p = q.front();
                q.pop();
                if(i==0) current = p.second;
                else {
                    int val = p.second-current+1;
                    result = max(result,val);
                }
                
                    if(p.first->left) q.push({p.first->left,p.second*2-current});
                    if(p.first->right) q.push({p.first->right,p.second*2-current+1});
                
            }
        }
        
        return result;
    }
};