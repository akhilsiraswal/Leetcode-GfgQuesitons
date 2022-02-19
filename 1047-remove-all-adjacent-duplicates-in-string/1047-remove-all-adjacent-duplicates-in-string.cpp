class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char>st;
        string result="";
        for(int i=0;i<s.length();i++){
            
            if(!st.empty()){
                 char ch = st.top();
                if(ch == s[i]) st.pop();
                else st.push(s[i]);
            }else st.push(s[i]);
            
        }
        
        while(!st.empty()){
            result=st.top()+result;
            st.pop();
        }
        return result;
        
        
    }
};