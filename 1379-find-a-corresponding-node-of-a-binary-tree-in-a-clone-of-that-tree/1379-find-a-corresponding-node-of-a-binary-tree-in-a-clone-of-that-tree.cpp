/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* val;
    void traverse(TreeNode *o,TreeNode*c,TreeNode*target){
        if(!o) return ;
        if(target == o) val = c;
        traverse(o->left,c->left,target);
        traverse(o->right,c->right,target);
    
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        val = NULL;
        traverse(original,cloned,target);
        return val;
    }
};