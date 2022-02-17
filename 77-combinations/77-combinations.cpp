class Solution {
public:
    vector<vector<int>>result;
    void fun(vector<int>nums,int idx,int n,int k){
        if(k==0){
            result.push_back(nums);
        }
        
        for(int i=idx;i<=n;i++){
            nums.push_back(i);
            fun(nums,i+1,n,k-1);
            auto it = find(nums.begin(),nums.end(),i);
            nums.erase(it);
            
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int>nums;
        fun(nums,1,n,k);
        return result;
    }
};