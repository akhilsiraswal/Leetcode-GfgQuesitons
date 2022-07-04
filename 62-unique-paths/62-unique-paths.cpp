class Solution {
public:
    /*
    int path(int i,int j,int m,int n,vector<vector<int>> &dp){
        if(i>=m||j>=n) return 0;
        if(i==m-1&& j==n-1) {
            return 1;
        }
        
        if(dp[i][j] !=-1){
            return dp[i][j];
        }else{
            return dp[i][j] = path(i+1,j,m,n,dp)+path(i,j+1,m,n,dp);
        }
        
        
        
        
        
        
    }
    
    int uniquePaths(int m, int n) {
        
        vector<vector<int>>visited(m,vector<int>(n,-1));
        
        return path(0,0,m,n,visited);
        
         
    }
    */
    
    
    int bruteforce(int m,int n,int i,int j,vector<vector<int>> &mp){
        if(i>m || j>n) return 0;
        if(i == m && j == n){
            return 1;
        }
        if(mp[i][j]) return mp[i][j];
        return mp[i][j] = bruteforce(m,n,i,j+1,mp)+bruteforce(m,n,i+1,j , mp);
    }
    
    int uniquePaths(int m, int n) {
        vector<vector<int>> mp(m+1,vector<int>(n+1,0));
        return bruteforce(m,n,1,1,mp);
    }
};