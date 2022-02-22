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
    
    
    
    vector<TreeNode*> BST(int start,int end){
        
        
        
        if(start>end) {
            vector<TreeNode*>b;
            b.push_back(NULL);
            return b;
        }
        vector<TreeNode*>result;
        for(int i=start;i<=end;i++){
            vector<TreeNode*>left = BST(start,i-1);
            vector<TreeNode*>right = BST(i+1,end);
            
            for(auto j:left){
                for(auto k:right){
                    TreeNode*root = new TreeNode(i);
                    root->left = j;
                    root->right = k;
                    
                    result.push_back(root);
                }
            }
            
        }
        return result;
        
    }
    
    vector<TreeNode*> generateTrees(int n) {
        return BST(1,n);
    }
};