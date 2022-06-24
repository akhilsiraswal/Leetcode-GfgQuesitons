class Solution {
public:
    /*
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>>temp=matrix;
        
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    
                    
                    for(int k=0;k<matrix[i].size();k++) {
                        temp[i][k]=0;
                        
                    }
                    for(int k=0;k<matrix.size();k++)temp[k][j]=0;
                    
                    
                    
                    
                    
                }
            }
        }
        
        matrix =  temp;
        
        
    }
    */
    
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<pair<int,int>> zeros;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0) zeros.push_back({i,j});
            }
        }
        
        for(auto zero:zeros){
            int i = zero.first;
            int j=zero.second;
            
            for(int k=0;k<m;k++){
                matrix[k][j] = 0;
            }
            for(int k=0;k<n;k++){
                matrix[i][k] = 0;
            }
            
        }
        
    }
};