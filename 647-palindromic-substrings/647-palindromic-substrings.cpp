class Solution {
public:
    
    
    bool isPalindrome(string sub){
       if(sub.length() == 0) return false;
        int l=0,h=sub.length()-1;
       
        while(l<h){
            if(sub[l++]!=sub[h--]) return false;
        }
        return true;
    }
    
    int countPalindrome(string s,string &sub,int idx){
        if(idx == s.length()){
            if(isPalindrome(sub)) {
            cout<<sub<<endl;
                return 1;
            }
            else return 0;
        }
        
        sub.push_back(s[idx]);
        int with = countPalindrome(s,sub,idx+1);
        sub.pop_back();
         // int without = countPalindrome(s,sub,idx+1);
        return with;
    }
    
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            string sub="";
            for(int j=i;j<s.length();j++){
                sub+=s[j];
            if(isPalindrome(sub)) count++;
            }
        }
        
        return count;
        
    }
};