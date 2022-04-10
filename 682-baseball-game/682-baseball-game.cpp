class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>st;
        for(auto i:ops){
            // cout<<stoi(i)<<" ";
            
             if(i[0] == 'C')st.pop();
            else if(i[0] == 'D'){
                int n = st.top();
                st.push(n*2);
            }else if (i[0] == '+'){
                int n1 = st.top();
                st.pop();
                int n2 = st.top();
                st.push(n1);
                st.push(n1+n2);
            }else{
                st.push(stoi(i));
            }
        }
        
        int res=0;
        while(!st.empty()) {
            res+=st.top();
            st.pop();
        }
        return res;
    }
};