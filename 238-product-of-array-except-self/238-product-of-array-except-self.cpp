
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

/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int>pref(nums.size()),suff(nums.size()),result;
        pref[0]=nums[0];suff[nums.size()-1] = nums[nums.size()-1];
        for(int i=1;i<nums.size();i++){
            pref[i] = nums[i]*pref[i-1];
        }
        
        for(int i=nums.size()-2;i>=0;i--) suff[i] = nums[i]*suff[i+1];
        
        for(int i=0;i<nums.size();i++){
            int num=0;
            if(i-1>0 && i+1<nums.size()) num = pref[i-1]*suff[i+1];
            else if(i-1>0) num=pref[i-1];
            else if(i+1<nums.size()) num = suff[i+1];
             result.push_back(num);
        }
        return result;
        
        
    }
};
*/