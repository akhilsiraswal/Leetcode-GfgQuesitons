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
    
    // to traverse the binary search tree.. 
    
    void traverse(TreeNode *root,vector<int> &values){
        if(!root) return;
        traverse(root->left,values);
        values.push_back(root->val);
        traverse(root->right,values);
    }
    
    TreeNode* findBST(TreeNode*root,int value){
        if(!root) return NULL;
        if(value == root->val) return root;
         
         TreeNode *left= findBST(root->left,value) ;
            TreeNode *right= findBST(root->right,value);
         if(left) return left;
        else return right;
    }
    
    void recoverTree(TreeNode* root) {
        vector<int> values,temp;
        traverse(root,values);
        temp=values;
        sort(temp.begin(),temp.end());
        
        int first,second;
        
        for(int i=0;i<temp.size();i++){
            if(temp[i]!=values[i]){
                first=temp[i];
                second=values[i];
                break;
            }
        }
        
        
        TreeNode *f=findBST(root,first);
        TreeNode *s=findBST(root,second);
        
        swap(f->val,s->val);        
        
        
    }
};