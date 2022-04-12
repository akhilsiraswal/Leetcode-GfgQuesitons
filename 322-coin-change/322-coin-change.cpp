class Solution {
public:
    
/*
    
    int helper(vector<int>coins,int idx,int amount,vector<vector<int>> &dp){
        if (idx == coins.size()-1) {
            if(amount%coins[idx] == 0) return amount/coins[idx];
            else return 1e9;
        }
        if(dp[idx][amount]!=-1) return dp[idx][amount];
        int nottake,take=INT_MAX;
        nottake = 0+helper(coins,idx+1,amount,dp);
        if(amount>=coins[idx])        take= 1+helper(coins,idx,amount-coins[idx],dp);
        return dp[idx][amount] = min(take,nottake);
        // return min(nottake,take);
        
    }
    
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int val = helper(coins,0,amount,dp);
        if(val== 1e9) return -1;
        else return val;
        // return helper(coins,0,amount);
    }
*/
     int coinChange(vector<int>& coins, int amount) {
         
         vector<vector<long long >> dp(coins.size(),vector<long long >(amount+1,0));
         
         for(int t=0;t<=amount;t++){
             if(t%coins[0] == 0) dp[0][t] = t/coins[0];
             else dp[0][t] = 1e9;
         }
         
         for(int i=1;i<coins.size();i++){
             for(int j=0;j<=amount;j++){
                 int nottake = 0+dp[i-1][j];
                 int take=INT_MAX;
                    if(coins[i]<=j)        take= 1+dp[i][j-coins[i]];
                     dp[i][j] = min(take,nottake);
             }
         }
         if(dp[coins.size()-1][amount] >= 1e9) return -1;
         else return dp[coins.size()-1][amount];
         
         
     }
    
    
};