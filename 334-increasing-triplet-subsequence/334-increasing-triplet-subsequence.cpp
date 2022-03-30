class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int>dp;
        for(auto i:nums){
            auto itr= lower_bound(dp.begin(),dp.end(),i);
            if(itr == dp.end()){
                dp.push_back(i);
                if(dp.size() == 3) return true;
                continue;
            }
            
            if((*itr) > i) {
                *itr = i;
            }
        }
        return false;
    }
};