class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res=0;
        int l=0,h=nums.size()-1;
        while(l<h){
            if(nums[l]+nums[h] == k) {
                res++;
                // while(l<h && nums[l] == nums[l+1]) l++;
                // while(l<h && nums[h] == nums[h-1]) h--;
                l++;
                h--;
            }
            else if(nums[l]+nums[h] > k ) h--;
            else l++;
        }
        return res;
    }
};