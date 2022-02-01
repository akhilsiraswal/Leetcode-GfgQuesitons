#include<bits/stdc++.h>
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        int n = matrix[0].size(),result=0;
        int dp[m][n];
        
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(i==m-1 && j==n-1){
                    dp[i][j] = matrix[i][j] - '0' ;
                }else if (i==m-1 ){
                    dp[i][j] = matrix[i][j]  - '0';
                }else if (j==n-1){
                    dp[i][j] = matrix[i][j] - '0';
                }else{
                    if(matrix[i][j] == '0'){
                        // cout<<matrix[i][j]<<endl; 
                        dp[i][j] = 0;
                    }
                    else{
                        int mn = min(dp[i][j+1],dp[i+1][j]);
                        mn = min(mn,dp[i+1][j+1]);
                        // cout<<dp[i][j+1]<<" "<< dp[i+1][j] <<" "<<dp[i+1][j+1] <<endl;
                        dp[i][j] = 1+mn;
                        
                    }
                }
                        result=max(result,dp[i][j]);
                
            }
        }
        return result*result;
        
        
        
    }
};