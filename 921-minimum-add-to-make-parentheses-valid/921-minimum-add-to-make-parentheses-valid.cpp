class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int count=0;
        for(auto i:s){
            if(i == '(') st.push(i);
            else{
                if(!st.empty()) st.pop();
                else count++;
                // st.pop();
            }
        }
        int ans = st.size();
        return ans+count;
        // return abs(st.size());
    }
};