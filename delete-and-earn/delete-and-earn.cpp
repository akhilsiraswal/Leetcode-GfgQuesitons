class Solution {
public:
    
    int func(int i,unordered_map<int,int>mp,vector<int>dp){
        if(i<=0) return 0;
        
        if(dp[i]!=-1) return dp[i];
        
        int op1 = i*mp[i] + func(i-2,mp,dp);
        int op2 = func(i-1,mp,dp);
        return dp[i] = max(op1,op2);
    }
    
    int deleteAndEarn(vector<int>& nums) {
        int mx=0;
        unordered_map<int,int>mp;
        for(auto i:nums) mp[i]++,mx = max(mx,i);
        vector<int>dp(mx+1,-1);
        
        // return func(mx,mp,dp);
        dp[0] = 0;
        dp[1] = 1*mp[1];
        for(int i=2;i<=mx;i++){
            dp[i] = max(i*mp[i]+dp[i-2],dp[i-1]);
            
        }
        return dp[mx];
    }
};