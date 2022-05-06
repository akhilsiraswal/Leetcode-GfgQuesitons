class Solution {
public:
    /*
    string removeDuplicates(string s, int k) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            int j=0;
            vector<char>v;
           
            
            
            while(!st.empty() && j<k-1){
                char ch = st.top();
                st.pop();
                    v.push_back(ch);
                if(ch!= s[i])break; 
                j++;
            }
          
            if(j!=k-1){
                for(int it=v.size()-1;it>=0;it--)st.push(v[it]);
                // for(auto i:v) st.push(i);
            st.push(s[i]);
            }
        }
        
        string res="";
        while(!st.empty()){
            res = st.top() + res;
            st.pop();
        }
        return res;
    }
    */
     string removeDuplicates(string s, int k) {
         int n=s.length();
         if(n<k) return s;
         stack<pair<char,int>> st;
         
         for(int i=0;i<n;i++){
             if(st.empty() || ( st.top().first !=s[i])) st.push({s[i],1});
             else {
                 auto f = st.top();
                 st.pop();
                 st.push({s[i], f.second+1});
             }
             
             if(st.top().second == k) st.pop();
         }
         
         string res="";
         while(!st.empty()){
             auto current = st.top();
             st.pop();
             while(current.second--){
                 res.push_back(current.first);
             }
         }
         reverse(res.begin(),res.end());
         return res;
         
         
         
         
         
     }
};