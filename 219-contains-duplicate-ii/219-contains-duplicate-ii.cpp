class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<k&& i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1) return true;
        }
        for(int i=k;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>1) return true;
            mp[nums[i-k]]--;
        }
        return false;
        
    }
};