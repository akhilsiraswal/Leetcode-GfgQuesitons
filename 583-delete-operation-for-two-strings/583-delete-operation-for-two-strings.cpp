class Solution {
public:
    
    int bruteforce(string word1,string word2,int idx1,int idx2,vector<vector<int>> &dp){
        
       if(idx1==0|| idx2==0) return idx1+idx2;
    
        if(dp[idx1][idx2]) return dp[idx1][idx2];
        
        if(word1[idx1-1] == word2[idx2-1]){

            return dp[idx1][idx2] =  bruteforce(word1,word2,idx1-1,idx2-1,dp);
        }
        
        return dp[idx1][idx2] =  min(bruteforce(word1,word2,idx1-1,idx2,dp),bruteforce(word1,word2,idx1,idx2-1,dp)) +1;
        
    }
    
    int minDistance(string word1, string word2) {
        int idx1=word1.length(),idx2 = word2.length();
        
        vector<vector<int>> dp(idx1+1,vector<int>(idx2+1,0));
        
        return bruteforce(word1,word2,idx1,idx2,dp);
        
        
        
    }
};