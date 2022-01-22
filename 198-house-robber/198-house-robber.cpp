class Solution {
public:
    
    // vector<int>hash;
    unordered_map<int,int>hash;
    int dp(vector<int> nums,int i){
        
        if(i==0) return nums[0];
        if(i==1) return max(nums[0],nums[1]);
        
        if(hash.find(i) == hash.end()){
            hash[i] = max(dp(nums,i-1),dp(nums,i-2) + nums[i]);
        }
        return hash[i];
        
    }
    
    int rob(vector<int>& nums) {
        return dp(nums,nums.size()-1);
    }
};