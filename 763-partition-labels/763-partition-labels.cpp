class Solution {
public:
    /*
    vector<int> partitionLabels(string s) {
        int n = s.length();
        vector<int>result;
        unordered_map<char,int>last,sub;
        for(int i=0;i<s.length();i++){
            last[s[i]] = i;
        }
        
        for(int i=0;i<n;){
            string subst  = s.substr(i,last[s[i]]-i+1);
            
            int max_i =last[subst[0]];
            for(int j=0;j<subst.length();j++){
                max_i = max(max_i,last[subst[j]]);
                subst = s.substr(i,max_i-i+1);
            }
            int mx = max_i-i+1;
            result.push_back(mx);
            i = max_i+1;
            
            
        }
        return result;
        
        
        
        
        
    }
    */
    
     vector<int> partitionLabels(string s) {
         int n = s.length();
         vector<int>result;
         unordered_map<char,int>last;
        
         for(int i=0;i<n;i++) last[s[i]]=i;
         
         int start=0,lst=0;
         for(int i=0;i<n;i++){
              lst = max(last[s[i]],lst);
             if(lst == i){
                 int nm = lst-start+1;
                 result.push_back(nm);
                 start = lst+1;
             }
         }
         return result;
         
     }
};