class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        vector<int>result;
        unordered_map<char,int>last,sub;
        for(int i=0;i<s.length();i++){
            last[s[i]] = i;
        }
        
        for(int i=0;i<n;){
            // int idx = last[s[i]]-i+1;
            string subst  = s.substr(i,last[s[i]]-i+1);
            
            int max_i =last[subst[0]];
            for(int j=0;j<subst.length();j++){
                max_i = max(max_i,last[subst[j]]);
                subst = s.substr(i,max_i-i+1);
            }
            int mx = max_i-i+1;
            result.push_back(mx);
            // subst = s.substr(i,max_i-i+1);  
            i = max_i+1;
            
            // cout<<subst<<endl;
            
        }
        return result;
        
        // return {};
        
        
        
        
    }
};