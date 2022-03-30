class Solution {
public:
    
    bool wordPattern(string pattern, string s) {
        int n1 = s.length(),n2 = pattern.length();
        vector<string> t;
        string temp="";
        for(int i=0;i<n1;i++){
            if(s[i] == ' ') {
                t.push_back(temp);
                temp="";
            }else temp+=s[i];
        }
        t.push_back(temp);
        
        if(t.size()!=n2) return false;
        
        unordered_map<char,string>mp;
        unordered_set<string>st;
        for(int i=0;i<n2;i++){
            if(mp.count(pattern[i]) == 0  && st.count(t[i])==0) {
                mp[pattern[i]] = t[i];
                st.insert(t[i]);
            }
            else if (mp.count(pattern[i]) == 0 && st.count(t[i])!=0) return false;
            else {
                if(mp[pattern[i]]!=t[i]) return false;
            }
        }
        return true;
        
    }
    
//     bool wordPattern(string pattern, string s) {
        
//     }
};