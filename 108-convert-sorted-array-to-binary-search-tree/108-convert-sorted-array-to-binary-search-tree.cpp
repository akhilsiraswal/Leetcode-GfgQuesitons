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
    
    TreeNode*BST(vector<int>arr,int start,int end){
        if(start>end) return NULL;
        
        int mid = start + (end-start)/2;
        
        
        TreeNode*tNode = new TreeNode(arr[mid]);
        if(start == end) return tNode;
        
        tNode->left = BST(arr,start,mid-1);
        tNode->right = BST(arr,mid+1,end);
        return tNode;
        
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return BST(nums,0,nums.size()-1);
    }
};