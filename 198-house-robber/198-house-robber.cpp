class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>hash(n+1);
        if(n==1) return nums[0]; 
        hash[0] = nums[0];
        hash[1] = max(nums[0],nums[1]);
        for(int i=2;i<n;i++){
            hash[i] = max(hash[i-1],nums[i]+hash[i-2]);
        }
        return hash[n-1];
        
        
    }
};