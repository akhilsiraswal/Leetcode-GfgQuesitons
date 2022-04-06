class Solution {
public:
    
    // implementing siece of Eratosthenes algorithm..
    
    
    int countPrimes(int n) {
        
        vector<int>dp(n,true);
        int count=0;
        int i=2;
        
        for(int i=2;i*i<n;i++){
            if(!dp[i]) continue;
            for(int j=i*i;j<n;j+=i) dp[j] = false;
        }
        
        
        for(int i=2;i<n;i++) if(dp[i]) count++;
        return count;
        
        
        
        
        
    }
};