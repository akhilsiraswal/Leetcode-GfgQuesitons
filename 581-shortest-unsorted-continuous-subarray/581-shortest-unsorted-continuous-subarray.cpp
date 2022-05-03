class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp(nums.begin(),nums.end());
        sort(temp.begin(),temp.end());
        
        int l=-1,h=-1;
        for(int i=0;i<temp.size();i++){
            if(temp[i] !=nums[i]) {
                l=i;
                break;
            }
        }
        
        for(int i=temp.size()-1;i>=0;i--){
            if(temp[i]!=nums[i]){
                h=i;
                break;
            }
        }
        
        if(l==-1 && h==-1){
            return 0;
        }else return h-l+1;
        
    }
};