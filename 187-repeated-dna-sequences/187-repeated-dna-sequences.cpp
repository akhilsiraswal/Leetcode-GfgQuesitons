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
         vector<string>res;
         if(s.length()<10) return res;
         for(int i=0;i<=s.length()-10;i++){
             string st = s.substr(i,10);
             mp[st]++;
             if(mp[st]>1){
                 if(find(res.begin(),res.end(),st)==res.end()){
                     res.push_back(st);
                 }
             }
         }
         return res;
         
         
     }
};