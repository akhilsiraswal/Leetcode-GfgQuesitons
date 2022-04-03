class Solution {
public:
    vector<vector<int>>result;
    
    void bruteforce(vector<int>&perms,vector<int>&nums,vector<bool>&visited){
        if(perms.size() == nums.size()) {
            if(find(result.begin(),result.end(),perms) == result.end()){
                
            result.push_back(perms);
            }
        }
        
        for(int i=0;i<nums.size();i++){
            if(visited[i]) continue;
            perms.push_back(nums[i]);
            visited[i] = true;
            bruteforce(perms,nums,visited);
            visited[i] = false;
            perms.erase(perms.end()-1);
        }
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>perms;
        vector<bool>visited(nums.size(),false);
        bruteforce(perms,nums,visited);
        return result;
    }
};