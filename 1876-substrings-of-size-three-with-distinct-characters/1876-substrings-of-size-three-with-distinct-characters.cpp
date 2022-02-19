class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length()<3) return 0;
        unordered_map<int,int>mp;
        int count=0,flag=0;
        for(int i=0;i<3 && i<s.length();i++){
            mp[s[i]]++;
            if(mp[s[i]]>1)flag=1;
        }
        if(!flag) count++;
        for(int i=3;i<s.length();i++){
            mp[s[i]]++;
            mp[s[i-3]]--;
             flag=0;
            for(auto j:mp) if(j.second>1) {
                flag=1;
                break;
            }
            if(!flag)count++;
        }
        // for(auto i:mp) if(i.second>1) return count;
        
        return count;
    }
};