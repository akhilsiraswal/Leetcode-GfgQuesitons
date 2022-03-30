class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int minr=0,minc=0,maxr=matrix.size()-1,maxc=matrix[0].size()-1;
        
        for(int i=0;i<=maxr;i++){
            
            int l=0,r=maxc;
            while(l<=r){
                int mid = l+(r-l)/2;
                if(matrix[i][mid] == target) return true;
                else if (matrix[i][mid] > target) r=mid-1;
                else l=mid+1;
            }
            
        }
        return false;
    }
};