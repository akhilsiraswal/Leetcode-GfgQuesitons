class Solution {
public:
    /*

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        
        if(nums.size()<4) return res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        for(int i=0;i<=n-4;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            
            for(int j=i+1;j<=n-3;j++){
                
                if(j>i+1 && nums[j]== nums[j-1] ) continue;
                int l=j+1,h=n-1;
                
                while(l<h){
                    long long  sum = nums[i];
                        sum+=nums[j];
                        sum+=nums[l];
                        sum+=nums[h];
                    if(sum == target){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[h]);
                        res.push_back(temp);
                        
                        while(l<h && nums[l] == nums[l+1]) l++;
                        while(h>l && nums[h] == nums[h-1]) h--;
                        h--;
                        l++;
                        
                    }else if(sum>target) h--;
                    else l++;
                }
                
                
            }
            
        }
        return res;
        
        
    }

    */
     vector<vector<int>> fourSum(vector<int>& nums, int target) {
         sort(nums.begin(),nums.end());
         vector<vector<int>> res;
         int n=nums.size();
         for(int i=0;i<=n-4;i++){
             if(i>0 && nums[i-1] == nums[i]) continue;
             
             for(int j=i+1;j<=n-3;j++){
                 if(j>i+1 && nums[j] == nums[j-1]) continue;
                 int l = j+1,h=n-1;
                 while(l<h){
                     long long sum = nums[i];
                     sum+=nums[j];
                     sum+=nums[l];
                     sum+=nums[h];
                     if(sum == target){
                         res.push_back({nums[l],nums[h],nums[i],nums[j]});
                         while(l<h && nums[l] == nums[l+1]) l++;
                         while(l<h && nums[h] == nums[h-1]) h--;
                         
                         l++;
                         h--;
                     }else {
                         if(sum>target) h--;
                         else l++;
                     }
                 }
             }
         }
         
         return res;
         
         
         
     }
};