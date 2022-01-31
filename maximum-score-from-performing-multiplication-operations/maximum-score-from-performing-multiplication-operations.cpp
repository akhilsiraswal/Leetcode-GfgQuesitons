class Solution {
public:
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        int n=nums.size();
        int m=multipliers.size();
        int dp[m+1][m+1];
        for(int i=0;i<=m;i++) for(int j=0;j<=m;j++)dp[i][j]=0;
        
        for(int i=m-1;i>=0;i--){
            for(int left=i;left>=0;left--){
                int right = n-1-i+left;
                int mul = multipliers[i];
                dp[i][left] = max(mul*nums[left]+dp[i+1][left+1] , mul*nums[right]+dp[i+1][left] );
            }
        }
        
        return dp[0][0];
        
        
        
    }
};