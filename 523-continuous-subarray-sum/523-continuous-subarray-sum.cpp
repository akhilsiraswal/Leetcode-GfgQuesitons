class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        
        
        int mod=0,prev=0;
        for(int i=0;i<nums.size();i++){
            mod+=nums[i];
            mod%=k;
            if(mod == 0 && i) return true;
            if(mp.find(mod)!=mp.end()){
                if(i-mp[mod] >1 ) return true;
            }else{
                mp[mod] = i;
            }
       }
        return false;
        
    }
};