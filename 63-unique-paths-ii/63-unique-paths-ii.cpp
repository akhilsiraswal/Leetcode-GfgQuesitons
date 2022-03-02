class Solution {
public:
    
    int paths(int i,int j,vector<vector<int>>&obstacles,vector<vector<int>>&dp){
        
        if(i>=obstacles.size()||j>=obstacles[0].size()) return 0;
        
        if(obstacles[i][j]==1) return 0;
        
        if(i==obstacles.size()-1 && j==obstacles[0].size()-1) return 1;
        
        // return paths(i+1,j,obstacles,dp)+paths(i,j+1,obstacles,dp);
        
        
        if(dp[i][j]!=0) return dp[i][j];
        else{
            return dp[i][j]= paths(i+1,j,obstacles,dp)+paths(i,j+1,obstacles,dp);
        }
        
        
        
    }
    
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>>dp(obstacleGrid.size(),vector<int>(obstacleGrid[0].size()));
        return paths(0,0,obstacleGrid,dp);
    }
};