class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]] = i;
        }
        
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            int idx = mp[nums1[i]];
            int next_greater = -1;
            for(int j=idx+1;j<nums2.size();j++){
                if(nums2[j]>nums1[i]){
                    next_greater = nums2[j];
                    break;
                }
            }
            res.push_back(next_greater);
        }
        
        return res;
    }
};