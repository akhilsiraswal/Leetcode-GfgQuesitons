class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        for(auto i:s) mp[i]++;
        
        int odd=0,count=0;
        for(auto i:mp){
            if(i.second%2==0) count+=i.second;
            else if(!odd)  {
                count+=i.second;
                odd=1;
            }else{
                count+=i.second-1;
            }
        }
        return count;
        
    }
};