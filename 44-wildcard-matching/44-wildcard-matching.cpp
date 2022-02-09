class Solution {
public:
    bool isMatch(string s, string p) {
        
      vector<vector<bool>>dp(p.length()+1,vector<bool>(s.length()+1));
        
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[i].size();j++){
                
                if(i==0 && j==0) {
                    dp[i][j] = true;
                }else if (i==0){
                    dp[i][j] = false;
                }else if (j==0){
                    if(p[i-1] == '*'){
                        dp[i][j] = dp[i-1][j];
                    }else{
                        dp[i][j] = false;
                    }
                }else{
                    
                    char pc=p[i-1],sc=s[j-1];
                    
                    if(pc == sc){
                        dp[i][j] = dp[i-1][j-1];
                    }else if(pc == '?'){
                        dp[i][j] = dp[i-1][j-1];
                    }else if (pc == '*'){
                        
                        dp[i][j] = dp[i-1][j] || dp[i][j-1];
                        
//                         dp[i][j] = dp[i-2][j];
                        
//                         if(p[i-2] =='.' || p[i-2] == s[j-1]){
//                             dp[i][j] = dp[i][j] || dp[i][j-1];
//                         }
                        
                        
                    }else{
                        dp[i][j] = false;
                    }
                    
                    
                    
                }
                
                
            }
            
        }
        
        
        
        return dp[p.length()][s.length()];
        
        
        
        
        
        
        
    }
};