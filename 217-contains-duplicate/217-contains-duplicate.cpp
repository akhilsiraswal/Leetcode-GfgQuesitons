class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
       return !(mp.size() == nums.size());
    }
};