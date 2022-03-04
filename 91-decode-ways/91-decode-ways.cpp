class Solution {
public:
    unordered_map<int,int>mp;
    int count(int idx,string s){
        int n = s.size();
        if(idx == n) return 1;
        
        if(s[idx] == '0')return 0;
        int result;
        if(mp[idx+1]!=0){
            result = mp[idx+1];
        }else{
            mp[idx+1] = count(idx+1,s);
            result = mp[idx+1];
        }
        if(idx<n-1 && (s[idx] == '1' || (s[idx] == '2' && s[idx+1] <'7' ))) {
            if(mp[idx+2]!=0) result+=mp[idx+2];
            else{
                mp[idx+2] = count(idx+2,s);
                result +=mp[idx+2];
            }
            // result +=count(idx+2,s);
        }
        
        return result;
        
    }
    
    int numDecodings(string s) {
        int res = count(0,s);
        return res;
    }
};