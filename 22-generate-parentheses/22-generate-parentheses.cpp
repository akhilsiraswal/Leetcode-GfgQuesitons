class Solution {
public:
    
    void helper(vector<string>&result,string str,int n,int m){
        if(n==0 && m==0){
            result.push_back(str);
            return ;
        }
        if(m>0) helper(result,str+")",n,m-1);
        if(n>0) helper(result,str+"(",n-1,m+1);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        helper(result,"",n,0);
        return result;
    }
};