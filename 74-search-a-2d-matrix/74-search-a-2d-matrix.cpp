class Solution {
public:
    /*

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
    
    */
    /*
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
        int m = matrix.size(),n=matrix[0].size();
        for(int i=0;i<m;i++){
            if(target <= matrix[i][n-1]){
                int l=0,h=n-1;
                while(l<=h){
                    int mid = l + (h-l)/2;
                    if(matrix[i][mid] == target) return true;
                    else if(matrix[i][mid]<target) l=mid+1;
                    else h=mid-1;
                }
            }
        }
        return false;
    }
    */

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    
    int i=0,j=matrix[0].size()-1;
    while(i<matrix.size() && j>=0){
        if(matrix[i][j] == target) return true;
        else if (matrix[i][j]<target) i++;
        else j--;
    }
    return false;
    
}
    
};