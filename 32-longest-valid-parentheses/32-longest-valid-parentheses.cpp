class Solution {
public:
    /*
    
    bool isValid(string s,int i,int j){
        stack<char>st;
        for(int it = i;it<j;it++){
            if(s[it] == '(') st.push(s[it]);
            else{
                if(st.empty()) return false;
                st.pop();
            }
        }
        return st.empty();
    }
    int longestValidParentheses(string s) {
        int mx=0;
        for(int i=0;i<s.length();i++){
            for(int j=i+2;j<=s.length();j++){
                
                if(isValid(s,i,j)){
                    cout<<j-i<<endl;
                    if(j-i >mx ) mx = j-i;
                }
            }
        }
        return mx;
    }
    */  
    int longestValidParentheses(string s) {
        stack<int>st;
        st.push(-1);
        int len=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(') st.push(i);
            else{
             st.pop();
                if(!st.empty()) len = max(len,i-st.top());
                else{
                    st.push(i);
                }
            }
        }
        return len;
    }
};