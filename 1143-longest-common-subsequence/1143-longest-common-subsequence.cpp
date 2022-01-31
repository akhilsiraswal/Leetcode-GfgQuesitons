class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.length(),n2=text2.length();
        int dp[n2+1][n1+1];
        
        for(int i=0;i<=n1;i++)dp[0][i]=0;
        for(int j=0;j<=n2;j++) dp[j][0] = 0;
        
        for(int i=1;i<=n2;i++){
            for(int j=1;j<=n1;j++){
                if(text1[j-1] == text2[i-1]){
                    dp[i][j] = dp[i-1][j-1]+1;
                }else {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n2][n1];
        
    }
};