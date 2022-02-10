class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<int,int>mpt;
        unordered_map<int,int>mps;
        for(auto i:t) mpt[i]++;
        int i=0,j=0,count=0,result=INT_MAX,res=0;
        
        for(i=0;i<s.length();i++){
            if(mpt[s[i]]>0) count++;
            mpt[s[i]]--;
            if(count == t.length()){
                while(j<i  && mpt[s[j]] < 0 ) mpt[s[j]]++,j++;
                
                if(result>i-j){
                    result = i-j+1;
                    res = j;
                }
                mpt[s[j++]]++;
                count--;
                
            }
            
        }
        
                
        
        
        if(result == INT_MAX)   return "";
        return s.substr(res,result);
        
        
    }
};