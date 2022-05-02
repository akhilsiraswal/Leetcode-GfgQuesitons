class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest=nums[0]+nums[1]+nums[2],n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n-3;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            
            int l=i+1,h=n-1;
            while(l<h){
                int sm = nums[i]+nums[l]+nums[h];
                if(sm == target ) return sm;
                 if(abs(target-sm) < abs(target-closest)){
                    closest = sm;
                }
                if(sm>target) h--;
                else l++;
            }
        }
        return closest;
    }
};