class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
       int check=0,n=nums.size();
        for(int i=0;i<n;i++){
            check=0;
            int mx=INT_MIN,idx;
            for(int j=0;j<i;j++){
                mx = max(mx,nums[j]);
                if(nums[i] < nums[j]) {
                    idx = j;
                    check++;
                }
            }
            if(check > 1 ){ nums[i] = mx;break;}
            else if(check ==1) {nums[idx] = nums[i];break;}
            
        }
        
        for(int i=1;i<n;i++){
            if(nums[i] <nums[i-1]  ) return false;
        }
        return true;
        
    }
};