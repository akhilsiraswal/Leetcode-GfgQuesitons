class Solution {
public:
   /*
   vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]) == mp.end()) mp[nums[i]]=i;
            
            int num = target-nums[i];
            
            if(mp.find(num)!=mp.end() && mp[num]!=i ){
                result.push_back(i);
                result.push_back(mp[num]);
                return result;
            }
            
            
        }
        return result;
        
        
    }
   */
    
    /*
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>result;
        for(int i=0;i<nums.size();i++){
            if(mp[target-nums[i]]>0){
             auto it = find(nums.begin(),nums.end(),target-nums[i]);
                int idx = it-nums.begin();
                result.push_back(i);
                result.push_back(idx);
            }
            mp[nums[i]]++;
        }
        return result;
    }
    */

    /*
    
     vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int,int>temp;
         // vector<pair<int,int>> temp;
         
         for(int i=0;i<nums.size();i++){
             temp[nums[i]] = i;
         }
        sort(nums.begin(),nums.end());         
         
         int l=0,h=nums.size()-1;
         while(l<h){
             if(nums[l]+nums[h] == target){
                 return {temp[nums[l]],temp[nums[h]]};
             }else if(nums[l]+nums[h]>target)h--;
             else l++;
         }
         return {};
     }
    
    */
    
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]=i;
        
        for(int i=0;i<nums.size();i++){
            if(mp[target - nums[i]] && mp[target - nums[i]] !=i) return {i,mp[target-nums[i]]};
        }
        return {};
        
    }

};