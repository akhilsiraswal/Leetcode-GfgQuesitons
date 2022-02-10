class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int dp[gain.size()+1];
        dp[0] = 0;
        
        for(int i=1;i<=gain.size();i++){
            dp[i] = dp[i-1]+gain[i-1]; 
            cout<<dp[i]<<" ";
        }
        return *max_element(dp,dp+gain.size()+1);
        
    }
};