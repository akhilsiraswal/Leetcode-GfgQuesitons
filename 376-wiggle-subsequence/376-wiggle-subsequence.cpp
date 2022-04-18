class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int temp1[nums.size()],temp2[nums.size()];
        temp1[0]=1;
        temp2[0]=1;
        
        for(int i=1;i<nums.size();i++){
            if(nums[i]-nums[i-1]>0){
                temp1[i] = temp2[i-1]+1;
                temp2[i] = temp2[i-1];
            }else if(nums[i]-nums[i-1]<0) {
                temp2[i] = temp1[i-1]+1;
                temp1[i] = temp1[i-1];
            }else {
                temp1[i] = temp1[i-1];
                temp2[i] = temp2[i-1];
            }
        }
        
        return max(temp1[nums.size()-1],temp2[nums.size()-1]);
        
    }
};