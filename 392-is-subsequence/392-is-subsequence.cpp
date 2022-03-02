class Solution {
public:
    bool isSubsequence(string s, string t) {
        int dp[s.size()+1][t.size()+1];
        
        
        
        for(int i=0;i<=s.size();i++){
            for(int j=0;j<=t.size();j++){
                if(i==0) dp[i][j] = 0;
                else if(j==0) dp[i][j] = 0;
                else{
                    if(s[i-1] == t[j-1]){
                        dp[i][j] = 1+dp[i-1][j-1];
                    }else{
                        dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                    }
                }
                
                
            }
        }
        
        return dp[s.size()][t.size()] == s.size();
        
        
    }
};