class Solution {
public:
    /*
        int flag=0;
    unordered_map<string,bool>mp;
    bool bruteforce(string s,vector<string> &wordDict,string st){
        if(st.length()> s.length()) return false;
        else if(st.length() == s.length()){
            if(st == s){
                flag=1;
                return true;
            }
            else return false;
        }
        if(mp.find(st)!=mp.end()) return mp[st];
        
        
        
        
        for(int i=0;i<wordDict.size();i++){
            st+=wordDict[i];
            bruteforce(s,wordDict,st);
            st = st.substr(0,st.length() -wordDict[i].length());
        }
       return flag;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        return bruteforce(s,wordDict,"");
    }
    */
    
  /*
    bool bruteforce(string s,unordered_set<string> &st){
        int len = s.length();
        if(len == 0) return true;
        
        for(int i=1;i<=len;i++){
            string sb = s.substr(0,i);
            if(st.find(sb)!=st.end() && bruteforce(s.substr(i),st) ){
                return true;
            }
        }
        return false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string>st;
        for(auto i:wordDict) st.insert(i);
        return bruteforce(s,st);
    }
  */  
    
    
    bool bruteforce(string s,vector<int> &dp,int start, unordered_set<string> &st){
        if(start>=s.size()) return true;
        
        if(dp[start]!=-1) return dp[start];
        
        for(int i=start+1;i<=s.size();++i){
            if(st.count(s.substr(start,i-start)) && bruteforce(s,dp,i,st) ){
                dp[start] = 1;
                return dp[start];
            }
        }
        
        dp[start] = 0;
        return dp[start];
    }
    
     bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st(wordDict.begin(),wordDict.end());
         vector<int> dp(s.size(),-1);
        return bruteforce(s,dp,0,st);
    }
       
   };