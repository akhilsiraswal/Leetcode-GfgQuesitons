class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>st = strs;
        vector<vector<string>>result;
        for(int i=0;i<st.size();i++){
            sort(st[i].begin(),st[i].end());
        }
        
        for(int i=0;i<st.size();i++){
            if(st[i] == "0")continue;
            vector<string>temp;
            temp.push_back(strs[i]);
            for(int j=i+1;j<st.size();j++){
                // cout<<st[i]<<" "<<st[j]<<endl;
                if(st[i] == st[j]){
                    temp.push_back(strs[j]);
                    st[j] = "0";
                }
            }
            result.push_back(temp);
        }
        
        
        
        // for(auto i:strs) cout<<i<<" ";cout<<endl;
        // for(auto i:st) cout<<i<<" ";
        return result;
        
    }
};