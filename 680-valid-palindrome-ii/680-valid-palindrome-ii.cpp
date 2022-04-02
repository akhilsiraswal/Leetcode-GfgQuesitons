class Solution {
public:
    
    bool isPalindrome(string s,int idx){
        int l=0,h=s.length()-1;
        while(l<=h){
            if(l == idx  ){
                l++;
                 continue;
            }else if(h==idx){
                h--;
                continue;
            }
            if(s[l++]!=s[h--]) return false;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int flag=0,l=0,h=s.length()-1;
        while(l<=h){
            if(s[l]!=s[h]){
                    return (isPalindrome(s,h) || isPalindrome(s,l) );
            }
            l++;h--;
        }
        return true;
    }
};