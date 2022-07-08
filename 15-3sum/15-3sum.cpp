class Solution {
public:
    /*
    
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
    */
    
    /*
     vector<int> twoSum(vector<int>& nums, int target,int l,int h) {
         unordered_map<int,int>temp;
         
         for(int i=l;i<h;i++){
             temp[nums[i]] = i;
         }
        // sort(nums.begin(),nums.end());         
         
         while(l<h){
             if(nums[l]+nums[h] == target){
                 return {nums[l],nums[h]};
             }else if(nums[l]+nums[h]>target)h--;
             else l++;
         }
         return {};
     }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        vector<vector<int>> res;
        if(n<3) return res;
        set<vector<int>> st;
        
        for(int i=0;i<n;i++){
            if(i!=0 && nums[i-1] == nums[i]) continue;
            int target = 0-nums[i];
            int j=n-1;
            while(j>i){
                if(j>i && nums[j+1]==nums[j]) {
                    j--;
                    continue;
                }
                vector<int> val;
                val = twoSum(nums,target,i+1,j);
                if(val.size()!=0){
                    val.push_back(nums[i]);
                    sort(val.begin(),val.end());
                    st.insert(val);
                }
                j--;
                
            }
        }
        for(auto i:st)res.push_back(i);
        
        return res;
        
        
        
    }
    */
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> result;
        for(int i=0;i<n;i++){
            if(i == 0 || (i>0 && nums[i-1]!=nums[i])){
                int l=i+1,r=n-1;
                int num = 0-nums[i];
                while(l<r){
                    if(nums[l]+nums[r] == num){
                        result.push_back({nums[l],nums[i],nums[r]});
                        
                        while(l<r && nums[l] == nums[l+1]) l++;
                        while(l<r && nums[r] == nums[r-1]) r--;
                        l++;
                        r--;
                        
                    }else{
                        if(nums[l]+nums[r] > num) r--;
                        else l++;
                    }

                }
            }
            
        }
        
        // for(auto i:st) result.push_back(i);
        return result;
        
        
        
    }
    
    
};