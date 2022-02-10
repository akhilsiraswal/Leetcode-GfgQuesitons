class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left[nums.size()],right[nums.size()];
        left[0]=nums[0];
        for(int i=1;i<nums.size();i++) left[i] = left[i-1]+nums[i];
        right[nums.size()-1] = nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--) right[i] = right[i+1]+nums[i];
        
        for(int i=0;i<nums.size();i++){
            if(left[i] == right[i]) return i;
        }
        return -1;
        
    }
};