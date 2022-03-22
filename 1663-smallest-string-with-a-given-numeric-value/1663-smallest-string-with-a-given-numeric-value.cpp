class Solution {
public:
    string getSmallestString(int n, int k) {
        string result="";
        
        while(n>0){
            for(int i=26;i>=1;i--){
                if(k-i < n-1 ) continue;
                else{
                    result+=i-1+'a';
                    k-=i;
                    n--;
                    break;
                }
            }
        }
        reverse(result.begin(),result.end());
        return result;
    }
};