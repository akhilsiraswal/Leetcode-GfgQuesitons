class Solution {
public:
    bool hasAllCodes(string s, int k) {
       
        // if(k==1) return true;
        
        unordered_set<string>st;
        for(int i=0;i<=s.length();i++){
            string subs = s.substr(i,k);
            if(subs.length() == k) st.insert(subs);
        }
        
        for(auto i:st) cout<<i<<" ";
       
        int temp = pow(2,k);
        return st.size() == temp;
        
        // return true;
    }
};