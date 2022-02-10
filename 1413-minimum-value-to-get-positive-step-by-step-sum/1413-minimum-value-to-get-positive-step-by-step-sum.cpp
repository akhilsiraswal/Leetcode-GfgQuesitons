class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int pre[nums.size()],mn=nums[0];
        pre[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            pre[i] = pre[i-1]+nums[i];
            mn = min(mn,pre[i]);
        }
        if(mn<0){
            return abs(mn)+1;
        }
        return 1;
        
        
    }
};