class Solution {
public:
    int minimumSum(int num) {
        string s = to_string(num);
        sort(s.begin(),s.end());
        int num1 = s[0]-'0';
        num1=num1*10+(s[2]-'0');
        int num2 = s[1]-'0';
        num2=num2*10+s[3]-'0';
        
        return num1+num2;
    }
};