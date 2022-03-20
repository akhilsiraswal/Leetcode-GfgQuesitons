class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        for(int i=0;i<nums.size()-nums.size()/2;i++){
            if(nums[i] == nums[i+nums.size()/2]) return nums[i];
        }
        return -1;
    }
};