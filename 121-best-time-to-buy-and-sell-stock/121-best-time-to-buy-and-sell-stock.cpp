class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>temp(prices.size());
        int n=prices.size();
        temp[n-1] = prices[n-1];
        for(int i=n-2;i>=0;i--) temp[i] = max(prices[i],temp[i+1]);
        
        // for(int i=0;i<n;i++) cout<<temp[i]<<" ";
        // cout<<endl;
        
        int mx=0;
        for(int i=0;i<n;i++){
            mx = max(mx,temp[i]-prices[i]);
        }
        return mx;
        
    }
};