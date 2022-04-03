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
    
    int search(vector<int>inorder,int start,int end,int key){
        int i;
        for( i=start;i<end;i++) if(key == inorder[i]) return i;
        return i;
    }
    
    TreeNode* tree(vector<int> p,vector<int>v,int start,int end,int &preIndex){
        if(start>end) return NULL;
        int current = p[preIndex++];
        TreeNode* tNode = new TreeNode(current);
        if(start == end) return tNode;
        
        int inIndex = search(v,start,end,current);
        tNode->left = tree(p,v,start,inIndex-1,preIndex);
        tNode->right = tree(p,v,inIndex+1,end,preIndex);
        
        return tNode;
        
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        // unordered_map<int,int> mp;
        int n = inorder.size();
        int p=0;
        
        // for(int i=0;i<n;i++) mp[inorder[i]] = i;
        
        return tree(preorder,inorder,0,n-1,p);
    }
};