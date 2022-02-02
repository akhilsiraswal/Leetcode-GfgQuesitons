class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int hash[26]={0};
        vector<int>result;
        
        int n=p.length();
        
        for(int i=0;i<p.length();i++){
            hash[p[i]-'a']++;
        }
        
        for(int i=0;i<s.length();i++){
            string sb = s.substr(i,n);
            int hash2[26]={0};
            for(auto j:sb) hash2[j-'a']++;
            int flag=0;
            for(int k=0;k<26;k++) if(hash[k]!=hash2[k]){
                 flag=1;break;
            }
            
            if(!flag)result.push_back(i);
            
            
        }
        
        return result;
        
    }
};