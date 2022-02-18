class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       
        for (int i=1;i<nums.size();i++){
            nums[i] = nums[i-1]+nums[i];
        }
        
        int i=0,j=0,result=INT_MAX;
        while(i<nums.size() &&j<nums.size()){
            
            
                while(i< nums.size() && nums[j]-nums[i] >=target){
                    result = min(result,j-i);
                    i++;
                
            }
            
            if(nums[j] >= target){
                result = min(result,j+1);
                j++;
            }
            else if(nums[j]-nums[i]<target) j++;
           
        }
        
        return result == INT_MAX?0:result;
        
        
    }
};