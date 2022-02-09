class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        set< vector<int> >st;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(abs(nums[i] - nums[j]) == k){
                    int a=nums[i],b=nums[j];
                    int mn = min(a,b);
                    int mx = max(a,b);
                    vector<int>t;
                    t.push_back(mn);
                    t.push_back(mx);
                    
                    st.insert(t);
                    
//                     if(mp[nums[i]]!=nums[j] || mp[nums[j]]!=nums[i]){
                    
//                         mp[nums[i]] = nums[j];
                        
//                     }
                    
                    
                }
            }
        }
        return st.size();
        
    }
};