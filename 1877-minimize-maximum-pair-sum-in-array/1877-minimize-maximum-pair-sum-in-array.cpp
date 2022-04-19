class Solution {
public:
  
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0,h=nums.size()-1,answer=INT_MIN;
        while(l<h){
            answer  = max(answer,nums[l++]+nums[h--]);
        }
        return answer;      
    }
};