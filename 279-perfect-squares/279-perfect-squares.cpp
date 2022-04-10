class Solution {
public:
    int res=100000;
    int helper(int n,int sum ,int count,vector<int>&dp){
        if(sum<0) return 100000;
        if(sum == 0) {
            res = min(res,count);
            dp[n] = res;
            return count;
        }
        if(dp[n] !=-1) return dp[n];
        
        for(int i=sqrt(n);i>=1;i--){
            count = min(helper(i*i,sum-i*i,count+1,dp),count);
            
        }
        return res;
    }
    
    
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        return helper(n,n,0,dp);
    }
};