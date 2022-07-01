class Solution {
public:
    /*
    void nextPermutation(vector<int>& nums) {
        int k,l,n=nums.size();
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]) break;
        }
        if(k<0) reverse(nums.begin(),nums.end());
        else{
            for(l=n-1;l>k;l--){
                if(nums[l]>nums[k]) break;
            }
            swap(nums[l],nums[k]);
            reverse(nums.begin()+k+1,nums.end());
        }
    }
    */
    /*
     void nextPermutation(vector<int>& nums) {
        int n=nums.size(), k, l ;
        for( k=n-2;k>=0;k--)
        {
            if(nums[k]<nums[k+1])
            {
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(),nums.end());
        }
        else
        {
            for( l=n-1;l>k;l--)
            {
                if(nums[l]>nums[k]){
                    break;
                }
            }
            swap(nums[k],nums[l]);
            reverse(nums.begin()+k+1,nums.end());
        }
    }
    */

    /*
    vector<vector<int>>res;
    
    void bruteforce(vector<int>nums,int idx){
        if(idx == nums.size()) {
            res.push_back(nums);
            return;
        }
        
        
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            bruteforce(nums,idx+1);
            swap(nums[idx],nums[i]);
        }
        
    }
    
    void nextPermutation(vector<int>& nums) {
        
        bruteforce(nums,0);
        sort(res.begin(),res.end());
        vector<int> ans;

        for(int i=0;i<res.size();i++){
            if(res[i] == nums){
                if(i == res.size()-1) ans = res[0];
                else ans = res[i+1];
            }
        }
        
        
        nums = ans;
    }
    */
    
    void nextPermutation(vector<int>& nums) {
        if(nums.size() <=1) return;
        int i=nums.size()-2;
        while(i>=0 && nums[i] >=nums[i+1] ) i--;
        
        
        if(i>=0){
            int j=nums.size()-1;
            while(nums[j] <= nums[i]) j--;
            
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+i+1,nums.end());
        
    }
};



   
