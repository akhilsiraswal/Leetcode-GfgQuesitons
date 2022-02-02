class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<int,int>mp;
        int mx = *max_element(nums.begin(),nums.end());
        for(auto i:nums)mp[i]=i;
        int i=0;
        for( i=1;i<=mx;i++) {
            if(i!=mp[i]) return i;
        }
        return i;
        
    }
};