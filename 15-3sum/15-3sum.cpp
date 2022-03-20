class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l=0,n=nums.size();
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> result;
        if(n<3)  return result;
        
        for(int i=0;i<=n-3;i++){
           
            if(i==0 ||(i>0 && nums[i-1]!=nums[i])){
                l=i+1;
                int h=nums.size()-1;
                int sum = 0-nums[i];
                while(l<h){
                vector<int>temp;
                    if(nums[l]+nums[h] == sum){
                        temp.push_back(nums[i]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[h]);
                        result.push_back(temp);     
                    

                        while(l<h && nums[l] == nums[l+1]) l++;
                        while(l<h && nums[h] == nums[h-1]) h--;

                    
                    l++;
                    h--;
                    }else{
                        if(nums[l]+nums[h]<sum) l++;
                        else h--;
                    }
                }
            }
            
        }
        return result;
        
        
    }
};