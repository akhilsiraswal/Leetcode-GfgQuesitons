class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        for(int i=0;i<s.length();i++){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') ){
                st+=tolower(s[i]);
            }else if(  s[i]>='0'&& s[i]<='9' ){
                st+=s[i];
            }
        }
        
        int l=0,h=st.length()-1;
        while(l<=h){
            if(st[l++]!=st[h--]) return false;
        }
        return true;
    }
};