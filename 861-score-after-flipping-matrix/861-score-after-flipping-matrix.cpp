
class Solution {
public:
    
    void row(vector<vector<int>> &grid,int row,int n){
        for(int i=0;i<n;i++)   {
            if(grid[row][i] == 0)  grid[row][i] = 1;
            else grid[row][i]=0;
        }
        
    }
     void col(vector<vector<int>> &grid,int col,int m){
        for(int i=0;i<m;i++)  {
            if(grid[i][col] == 0)  grid[i][col] =1;
            else grid[i][col] = 0;
        }
        
    }
    
    
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid[0].size();
        int m=grid.size();
        vector<int> column(n,0);
        
        for(int i=0;i<m;i++){
            if(grid[i][0] == 0){
               row(grid,i,n);
            } 
            
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1) column[j]++;
            }
        }
        
        
        for(int i=0;i<n;i++){
            if(column[i] <=m/2){
                col(grid,i,m); 
            }
        }
        
        
        
        
        
        
        int sum=0;
        for(int i=0;i<grid.size();i++){
            int k=0;
            for(int j=n-1;j>=0;j--){
                sum+= pow(2,k++)*grid[i][j];
            }
        }
        return sum;
        
        
        
        
        
    }
};

/*

class Solution {
public:
    void flipRow(vector<vector<int>>& A,int row,int n){
        for(int j = 0;j < n;j++){
            if(A[row][j] == 0)
                A[row][j] = 1;
            else
                A[row][j] = 0;
        }
    }
    
    void flipCol(vector<vector<int>>& A,int col,int m){
        for(int i = 0;i < m;i++){
            if(A[i][col] == 0)
                A[i][col] = 1;
            else
                A[i][col] = 0;
        }
    }
    
    
    int matrixScore(vector<vector<int>>& A) {
        int m = A.size();
        int n = A[0].size();
        vector<int> col(n,0);
        
        for(int i = 0;i < m;i++){
            if(A[i][0] == 0)
                flipRow(A,i,n);
            for(int j = 0;j < n;j++){
                if(A[i][j] == 1)
                    col[j]++;
            }
        }
        
        for(int j = 0;j < n;j++){
            if(col[j] <= m/2)
                flipCol(A,j,m);
        }
        
        int result = 0,sum;
        for(vector<int> v : A){
            sum = 0;
            for(int j = v.size()-1;j >= 0 ;j--){
                if(v[j] == 1)
                    sum += pow(2,v.size()-1-j);
            }
            result += sum;
        }
        
        return result;
    }
};
*/