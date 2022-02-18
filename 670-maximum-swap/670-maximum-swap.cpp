class Solution {
public:
    int maximumSwap(int num) {
        string s = to_string(num);
        for(int i=0;i<s.length();i++){
            int mx=s[i]-'0',idx;
            for(int j=i+1;j<s.length();j++){
                if(s[j]-'0'>=mx) {
                    mx=s[j]-'0';
                    idx = j;
                }
            }
            
            if(mx!=s[i]-'0'){
                swap(s[i],s[idx]);
                break;
            }
            
        }
        
        num = stoi(s);
        return num;
    }
};