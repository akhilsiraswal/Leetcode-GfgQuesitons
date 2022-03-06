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

};