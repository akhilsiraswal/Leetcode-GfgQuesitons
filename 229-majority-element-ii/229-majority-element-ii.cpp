class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        
        sort(nums.begin(),nums.end());
        
        int nk = round(nums.size()/3);
        unordered_map<int,int>mp;
        for(auto i:nums) mp[i]++;
        
        vector<int> res;
        for(auto i:mp){
            if(i.second >nk) res.push_back(i.first);
        }
        
        return res;
    }
};