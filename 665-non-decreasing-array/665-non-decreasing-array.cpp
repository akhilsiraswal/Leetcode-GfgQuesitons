class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
      int check=0,n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                if(check == 1) return false;
                check++;
                if(i<2 || nums[i-2] <= nums[i] ) nums[i-1] = nums[i];
                else nums[i] = nums[i-1];
            }
        }
        return true;
        
    }
};