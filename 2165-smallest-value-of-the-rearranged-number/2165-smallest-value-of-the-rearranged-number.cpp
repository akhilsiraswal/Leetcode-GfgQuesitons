class Solution {
public:
    long long smallestNumber(long long num) {
        string s=to_string(num);
        sort(s.begin(),s.end());
        if(num<=0){
            return -1*stoll(string(s.rbegin(),s.rend()));
        }
        int t = s.find_first_not_of('0');
        swap(s[0],s[t]);
        return stoll(s);
    }
};