class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>>result(r,vector<int>(c));
        vector<int>temp;
        int mat_r = mat.size();
        int mat_c = mat[0].size();
        if(mat_r*mat_c !=r*c) return mat;
        
           for(int i=0;i<mat_r;i++) for(int j=0;j<mat_c;j++) temp.push_back(mat[i][j]);
        int k=0;
            for(int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    result[i][j] = temp[k++];
                }
            }
        return result;
        
        
        
    }
};