class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int hash1[26]={0};
        // if(s1.length()>s2.length()) return false;
        for(int i=0;i<s1.length();i++) hash1[s1[i]-'a']++;
        
        int i=0;
        for(  i=0;i<s2.length();i++){
            string s = s2.substr(i,s1.length());
            int hash2[26]={0};
            for(int i=0;i<s.length();i++){
                hash2[s[i]-'a']++;
            }
            
            int flag=0;
            for(int i=0;i<26;i++) if(hash1[i] != hash2[i] ){
                flag=1;
                break;
            }
            if(!flag) return true;
            
        }
        
       
        
        return false;
        
        
    }
};