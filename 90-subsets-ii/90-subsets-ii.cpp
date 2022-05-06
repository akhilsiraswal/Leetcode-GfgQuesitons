class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        int n=nums.size(),sz = pow(2,n);
        int c,j;
        set<vector<int>> st;
        for(c=0;c<sz;c++){
            vector<int> res;
            for(j=0;j<n;j++){

                if(c & ( 1<< j)) {
                    res.push_back(nums[j]);
                }
            }
            sort(res.begin(),res.end());
            st.insert(res);
        }
        
        
        vector<vector<int>> res;
        
        for(auto i:st) res.push_back(i);
        
        return res;
        
        
    }
};