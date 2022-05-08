class Solution {
public:
    int twoEggDrop(int n) {
        vector<int> dp(n+2);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        if(n<3) return dp[n];
        for(int i=3;i<=n;i++){
            int best = n;
            for(int j=1;j<=i;j++){
                int breaks = 1+j-1;
                int survive = 1+dp[i-j];
                best = min(best,max(breaks,survive));
            }
            dp[i] = best;
            
        }
        return dp[n];
        
    }
};