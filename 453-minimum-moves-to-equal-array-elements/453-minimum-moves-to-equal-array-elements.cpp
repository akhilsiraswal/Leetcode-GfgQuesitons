class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn=INT_MAX;
        mn = *min_element(nums.begin(),nums.end());
        int res=0;
        for(int i=0;i<nums.size();i++){
            res += nums[i] - mn;
        }
        return res;
    }
};