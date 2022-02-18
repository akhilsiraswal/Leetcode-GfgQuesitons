class Solution {
public:
    string removeKdigits(string num, int k) {
        while(k){
            int n=num.size();
            int i=0;
            while(i+1<n && num[i]<=num[i+1]) i++;
            num.erase(i,1);
            k--;
        }
        
        int i=0,n=num.size();
        while(i<n-1 && num[i] == '0') i++;
        // string st = num.substr(i,n);
        num.erase(0,i);
        // return st;
        return num==""?"0":num;
        
    }
};