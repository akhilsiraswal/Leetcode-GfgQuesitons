class Solution {
public:
    
    int bruteforce(vector<int>&nums,int start,int end,vector<vector<int>>&dp){
        if(start == end){ 
        
            return nums[start];
        }
        
        if(dp[start][end]!=0){
            return dp[start][end];
        }
        
        int a = nums[start] - bruteforce(nums,start+1,end,dp);
        int b = nums[end]- bruteforce(nums,start,end-1,dp);
        
        dp[start][end] = max(a,b);
        return dp[start][end];
        
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size(),0));
        return bruteforce(nums,0,nums.size()-1,dp)>=0;
    }
};