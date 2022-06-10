class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length(),result=0,count=0,i=0;
        unordered_map<char,int>mp;
        
        while(i<n){
            if(mp.find(s[i]) == mp.end()){
                mp[s[i]] = i;
                count++;
                result = max(result,count);
                i++;
            }else{
                count=0;
                i = mp[s[i]]+1;
                mp.clear();
                
            }
        }
        return result;
        
    }
};