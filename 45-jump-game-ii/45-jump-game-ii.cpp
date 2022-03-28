class Solution {
public:
    
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
};