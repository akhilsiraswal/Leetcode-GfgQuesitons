class Solution {
public:
    /*
    int bruteforce(vector<int> &nums,int idx,int prev,vector<vector<int>> &dp){
        if(idx >= nums.size() ) return 0;
        
        if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];
        
        int take=0, nottake=bruteforce(nums,idx+1,prev,dp);
        if( prev == -1 ||  nums[idx]>nums[prev]) take = 1+bruteforce(nums,idx+1,idx,dp);
        
        
        
        dp[idx][prev+1] = max(take,nottake);
        return dp[idx][prev+1];
        // return max(take,nottake);
    }
    
    
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>> dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return bruteforce(nums,0,-1,dp);
    }
    */
    
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);
        int ans=1;
        
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]) dp[i] = max(dp[i],dp[j]+1),ans = max(ans,dp[i]);
            }
        }
        return ans;
    }
};



