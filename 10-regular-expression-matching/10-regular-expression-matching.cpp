class Solution {
public:
    bool isMatch(string s, string p) {
        
        // A  very goo problem... 
        vector<vector<bool>>dp(p.length()+1,vector<bool>(s.length()+1));
        // int dp[p.length()+1][s.length()+1];
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[i].size();j++){
                if(i==0 && j==0){
                    dp[i][j] = true;
                }else if(i==0){
                    dp[i][j] = false;
                }else if(j==0){
                    if(p[i-1] == '*'){
                        dp[i][j] = dp[i-2][j];
                        
                    }else {
                        dp[i][j] = false;
                    }
                }else{
                    
                    char pc = p[i-1],sc = s[j-1];
                    if(pc == '*'){
                    dp[i][j] = dp[i-2][j];
                        // dp[i][j] = true;
                        if(p[i-2] == '.'|| p[i-2] == s[j-1]){
                            dp[i][j] = dp[i][j] || dp[i][j-1];
                        }
                        
                        
                    }else if(pc == '.'){
                        dp[i][j] = dp[i-1][j-1];
                    }else if(pc == sc){
                        dp[i][j] = dp[i-1][j-1];
                    }else{
                        dp[i][j] = false;
                    }
                    
                    
                    
                    
                    
                }
            }
        }
        
        return dp[p.length()][s.length()];
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         bool dp[s.length()+1][p.length()+1];
//         dp[0][0] = true;
//         for(int i=1;i<=s.length();i++) dp[0][i]=false;
        
//         for(int i=1;i<=p.length();i++){
//             if(p[i] == '.') dp[i][0] = true;
//             else if(p[i] == '*'){
//                 dp[i][0] = dp[i-2][0];
//             }else dp[i][0] = false;
//         }
        
//         for(int i=1;i<=s.length();i++){
//             for(int j=1;j<=p.length();j++){
//                 if(s[i-1] == p[j-1]){
//                     dp[i][j] = true;
//                 }else if(p[i-1] == '.'){
//                     dp[i][j] = true;
//                 }else{
                    
//                     if(dp[i-2][j] == true){
//                         dp[i][j] = true;
//                     }else if(s[i-2] == p[j-1]) {
//                         dp[i][j] = dp[i][j-1];
//                     }else {
//                         dp[i][j] = false;
//                     }
                    
                    
//                 }
                
//             }
//         }
        
        
        
        
        
    }
};