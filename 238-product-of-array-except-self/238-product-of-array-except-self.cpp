class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>result;
        int zero=0,product=1;
        for(auto i:nums){
            if(i!=0)product*=i;
            else zero++;
        }
        
        if(zero == 1){
            for(int i=0;i<nums.size();i++){
                if(nums[i] !=0) result.push_back(0);
                else result.push_back(product);
            }
        }else if(zero >1){
            for(int i=0;i<nums.size();i++) result.push_back(0);
            // result.insert(result.begin(),result.end(),0);
        }else{
            for(int i=0;i<nums.size();i++){
                result.push_back(product/nums[i]);
            }
        }
        
        return result;
        
        
    }
};