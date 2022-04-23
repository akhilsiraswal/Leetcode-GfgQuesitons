class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]=mp[i-1]+1;
        }
        int mx=0;
        for(int i=0;i<nums.size();i++){
            mx = max(mx,mp[nums[i]]);
        }
        return mx;
    }
};