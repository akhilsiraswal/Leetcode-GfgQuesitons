class Solution {
public:
    // unordered_map<int,int>mp;
    int count(int idx,string s,vector<int>&dp){
        int n=s.length();
        if(dp[idx]>-1) return dp[idx];
        
        if(s[idx] == '0') {
            dp[idx] = 0;
            return 0;
            
        }
        int result = count(idx+1,s,dp);
        
        if(idx<n-1 && (s[idx] == '1' || (s[idx] == '2' && s[idx+1] <'7' ))) {
            result+=count(idx+2,s,dp);
        }
        return dp[idx] = result;
        
        
        
        
        
    }
    
    int numDecodings(string s) {
        vector<int>dp(s.length()+1,-1);
        dp[s.length()] =1;
        int res = count(0,s,dp);
        return res;
    }
};