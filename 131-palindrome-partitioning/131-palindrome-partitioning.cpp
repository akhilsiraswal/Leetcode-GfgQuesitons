class Solution {
public:
    
    bool isPalindrome(string s,int start,int end){
        // int l=0,h=s.length()-1;
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
return true;
    }
    
 void helper(string s,int idx , vector<string> &temp,vector<vector<string>> &result){
        if(idx == s.length()){
            result.push_back(temp);
           return  ;
        }
        
        for(int i=idx;i<s.size();i++){
            if(isPalindrome(s,idx,i)){
                string st = s.substr(idx,i-idx+1);
                temp.push_back(st);
                helper(s,i+1,temp,result);
                temp.pop_back();
            }
        }
         
        
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> temp;
         helper(s,0,temp,result);
        return result;
    }
};