class Solution {
public:
    
    int helper(vector<int> days,vector<int> costs,int idx,vector<int> &dp){
        if(idx == days.size()) return 0;
        
        if(dp[idx]!=-1) return dp[idx];
        int ticket0 = helper(days,costs,idx+1,dp) + costs[0];
        
        int temp1=idx,temp2=idx;
        
        
        while( temp1<days.size() && days[temp1] < days[idx]+7 ) temp1++;
        int ticket1 = helper(days,costs,temp1,dp)+costs[1];
        while(temp2 < days.size() && days[temp2]<days[idx]+30) temp2++;
    
        int ticket2 = helper(days,costs,temp2,dp)+costs[2];
    
        return dp[idx] =  min(ticket0,min(ticket1,ticket2));
    }
    
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.size(),-1);
        return helper(days,costs,0,dp);
    }
};