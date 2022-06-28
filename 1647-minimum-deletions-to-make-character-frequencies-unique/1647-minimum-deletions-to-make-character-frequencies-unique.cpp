class Solution {
public:
    
    static bool cmp(pair<char,int> p,pair<char,int> q){
        return p.second < q.second;
    }
    
    int minDeletions(string s) {
        unordered_map<char,int>mp;
        for(auto i:s) mp[i]++;
        vector<pair<char,int>>v;
        for(auto i:mp) v.push_back(i);
        
        sort(v.begin(),v.end(),cmp);
        
        int res=0;
        
        for(int i=v.size()-2;i>=0;i--){
            if(v[i].second == 0) break;
            if(v[i].second >= v[i+1].second){
                int prev = v[i].second;
                v[i].second = max(0,v[i+1].second-1);
                
                res+=(prev - v[i].second);
            }
        }
        return res;
        
        
        
    }
};