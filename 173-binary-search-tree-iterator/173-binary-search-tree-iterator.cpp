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
class BSTIterator {
public:
        // stack<TreeNode*>st;
        queue<TreeNode*>v;
    void inorder(TreeNode*root){
        if(!root) return;
        inorder(root->left);
        v.push(root);
        inorder(root->right);
    }
    BSTIterator(TreeNode* root) {

        inorder(root);
    }
    
    int next() {
        TreeNode*t = v.front();
        v.pop();
        return t->val;
    }
    
    bool hasNext() {
       return !v.empty();
        
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */