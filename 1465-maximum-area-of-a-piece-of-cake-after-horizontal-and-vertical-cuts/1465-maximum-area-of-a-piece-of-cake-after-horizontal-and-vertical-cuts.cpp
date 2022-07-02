class Solution {
public:
    
    
    
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        long long mod = 1e9+7;
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
    
        int mx_h=INT_MIN,mx_w = INT_MIN;
        for(int i=1;i<horizontalCuts.size();i++)    mx_h = max(mx_h,horizontalCuts[i] - horizontalCuts[i-1]);
        for(int i=1;i<verticalCuts.size();i++) mx_w = max(mx_w,verticalCuts[i] - verticalCuts[i-1]);
        
        
        // cout<<mx_h<<" "<<mx_w<<endl;
        
        // return 1;
        long long ans = mx_h;
        ans *= mx_w;
        return ans%mod;
    }
};