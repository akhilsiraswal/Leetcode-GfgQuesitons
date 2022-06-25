class Solution {
public:
    /*
    int maxProfit(vector<int>& prices) {
        int mx=0,mn=prices[0];
        for(int i=1;i<prices.size();i++){
             mn = min(mn,prices[i]);
            mx = max(mx,prices[i]-mn);
        }
        return mx;
        
        
    }
    */
    
    int maxProfit(vector<int>& prices) {
        vector<int> largest(prices.size());
        int n = prices.size(),res=INT_MIN;
        largest[n-1] = prices[n-1];
        for(int i=n-2;i>=0;i--){
            largest[i] = max(largest[i+1],prices[i]);
        }
        
        for(int i=0;i<n;i++){
            res = max(res,largest[i] -  prices[i]);
        }
        return res;
        
    }
};