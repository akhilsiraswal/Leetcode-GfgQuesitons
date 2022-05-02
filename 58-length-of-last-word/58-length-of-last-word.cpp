class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int j=n-1;
        while( j>=0 &&  tolower(s[j]) <'a'|| tolower(s[j])>'z' ) j--;
        int count=0;
        while( j>=0&& (tolower(s[j]) >='a'&& tolower(s[j])<='z'))j--,count++;
        
        return count;
    }
};