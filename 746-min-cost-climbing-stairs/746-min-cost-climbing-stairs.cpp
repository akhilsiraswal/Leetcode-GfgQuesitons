class Solution {
public:
    int dp(vector<int>&cost,vector<int>&mp,int i,int n){
        if(i>=n) return 0;
        if(mp[i] == 1) return cost[i];
        
        cost[i] = min(dp(cost,mp,i+1,n),dp(cost,mp,i+2,n))+cost[i];
        
        mp[i] = 1;
        return cost[i];
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>mp(cost.size(),0);
         dp(cost,mp,0,cost.size());
        return min(cost[0],cost[1]);
    }
};