class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>mp;
        int sum=0,result=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum == goal) result++;
            
            if(mp.find(sum-goal)!=mp.end()) result +=mp[sum-goal];
            
            mp[sum]++;
        }
        return result;
    }
};