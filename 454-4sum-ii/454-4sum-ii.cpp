class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        
        int result=0;
        unordered_map<int,int>mp;
        for(auto i:nums1){
            for(auto j:nums2) mp[i+j]++;
        }
        
        for(auto i:nums3){
            for(auto j:nums4){
                auto it = mp.find(0-i-j);
                if(it!=mp.end()) result+=it->second;
            }
        }
        return result;
        
        
    }
};