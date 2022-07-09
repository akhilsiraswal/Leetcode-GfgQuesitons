class Solution {
public:
    /*
    int bruteforce(vector<int> &nums,vector<int>&dp,int idx){
        if(idx >= nums.size()-1){
            return 0;
        }
        
        if(dp[idx]!=10001) return dp[idx];
        
                
        for(int i=1;i<=nums[idx];i++){
           dp[idx] = min(dp[idx], 1+bruteforce(nums,dp,idx+i));
        }
        return dp[idx] ;
        
    }
    
    int jump(vector<int>& nums) {
        vector<int>dp(nums.size(),10001);
        return bruteforce(nums,dp,0);
        
        
    }
    */
    
    int bruteforce(vector<int>&nums,int idx,vector<int> &dp){
        if(idx >=nums.size()-1) return 0;
        
        if(dp[idx]!=10001) return dp[idx];
        
        
        for(int i=idx+nums[idx];i>idx;i--){
            dp[idx] = min(dp[idx],bruteforce(nums,i,dp)+1);
        }
        
        return dp[idx];
        
        
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size()+1,10001);
        return bruteforce(nums,0,dp);
    }
    
};