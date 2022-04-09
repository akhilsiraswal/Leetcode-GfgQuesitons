class Solution {
public:
    
    static bool cmp(pair<int,int> p,pair<int,int> q ){
        return p.second>q.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums) mp[i]++;
        
        vector<pair<int,int>>temp;
        for(auto i:mp)    temp.push_back({i.first,i.second});
        
        sort(temp.begin(),temp.end(),cmp);
        vector<int>result;
        for(int i=0;i<k && i<nums.size() ;i++) result.push_back(temp[i].first);
        
        return result;
        
        
        
    }
};