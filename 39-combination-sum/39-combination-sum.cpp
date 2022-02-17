class Solution {
public:
    vector<vector<int>>result;
    void BruteForce(vector<int>candidates,vector<int>nums,int index,int sum,int target){
        if(sum>=target){
            if(sum == target) {
                result.push_back(nums);
            }
            return;
        }
        
        for(int i=index;i<candidates.size();i++){
            nums.push_back(candidates[i]);
            BruteForce(candidates,nums,i,sum+candidates[i],target);
            nums.erase(nums.end()-1);
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>nums;
        BruteForce(candidates,nums,0,0,target);
        return result;
    }
};