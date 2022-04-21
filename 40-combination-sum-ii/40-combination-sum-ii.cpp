class Solution {
public:
    
    void bruteforce(vector<int> &candidates,int target,vector<vector<int>> &result,vector<int> &nums,int idx){
        if(target<=0){
            if(target == 0){
                // sort(nums.begin(),nums.end());
                // if(find(result.begin(),result.end(),nums)==result.end()) 
                    result.push_back(nums);
            }
            return;
        }
        
        for(int i=idx;i<candidates.size();i++){
            if(i>idx && candidates[i] == candidates[i-1])continue;
            nums.push_back(candidates[i]);
            bruteforce(candidates ,target-candidates[i],result,nums,i+1);
            nums.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> nums;
        bruteforce(candidates,target,result,nums,0);
        return result;
    }
};