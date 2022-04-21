class Solution {
public:
    
    void bruteforce(int k,int n,vector<int> &nums,vector<vector<int>> &result,int idx){
        if(n<0) return;
        if(k==0){
            if(n==0) result.push_back(nums);
            return;
        }
        
        for(int i=idx;i<=9;i++){
            nums.push_back(i);
            bruteforce(k-1,n-i,nums,result,i+1);
            nums.pop_back();
        }
        
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> nums;
        bruteforce(k,n,nums,result,1);
        return result;
    }
};