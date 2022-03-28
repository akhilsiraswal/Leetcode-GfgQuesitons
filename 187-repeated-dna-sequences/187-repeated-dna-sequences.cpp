class Solution {
public:
    /*
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int>mp;
        for(int i=0;i<s.length();i++){
            string st = s.substr(i,10);
            mp[st]++;
        }
        vector<string>result;
        for(auto i:mp){
            if(i.second>1) result.push_back(i.first);
        }
        return result;
    }
    */
     vector<string> findRepeatedDnaSequences(string s) {
         
         unordered_map<string,int>mp;
         vector<string>result;
         unordered_set<string>res;
         if(s.length()<10) return result;
         for(int i=0;i<=s.length()-10;i++){
             string st = s.substr(i,10);
             mp[st]++;
             if(mp[st]>1){
                 res.insert(st);
                 // if(find(res.begin(),res.end(),st)==res.end()){
                 //     res.push_back(st);
                 // }
             }
         }
         
         for(auto i:res) result.push_back(i);
         
         return result;
         
         
     }
};