class Solution {
public:
    
    
    int helper(vector<char> &ch,int n,int i){
        if(n==0) return 1;
        int ans=0;
        
        for(int j=i;j<ch.size();j++){
            ans+=helper(ch,n-1,j);
        }
        return ans;
    }
    
    int countVowelStrings(int n) {
        vector<char> ch = {'a','e','i','o','u'};
       return helper(ch,n,0);
    }
};