class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>dp(n+1);
        for(int i=0;i<=n;i++){
            dp[i] = __builtin_popcount(i);
        }
        return dp;
    }
};