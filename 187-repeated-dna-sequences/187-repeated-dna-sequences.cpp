class Solution {
public:
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
};