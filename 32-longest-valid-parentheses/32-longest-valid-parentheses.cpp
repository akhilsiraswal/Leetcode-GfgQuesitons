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
    /*
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
    */
    int longestValidParentheses(string s){
        int open=0,close=0,len=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(') open++;
            else close++;
            
            if(open == close) {
                len = max(len,open+close);
            }else if(open < close) open=close=0;
            
        }
        open=close=0;
        
        for(int i=s.length()-1;i>=0;i--){
            if(s[i] == '(') open++;
            else close++;
            
            if(open == close) {
                len = max(len,open+close);
            }else if(open > close) open=close=0;
            
        }
        
        return len;
    }
};