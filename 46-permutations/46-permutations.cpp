/*
class Solution {
public:
    vector<vector<int>>result;
    
    void fun(vector<int>nums,int idx){
        if(idx == nums.size()) {
            result.push_back(nums);
            return;
        }
        
        
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            fun(nums,idx+1);
            swap(nums[idx],nums[i]);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        
        fun(nums,0);
        return result;
    }
};
*/

class Solution {
public:
    /*
    vector<vector<int>>result;
    
    void BruteForce(vector<int>perms,vector<int>nums, vector<bool>visited){
        if(perms.size() == nums.size()){
            result.push_back(perms);
        }
        
        for(int i=0;i<nums.size();i++){
            if(visited[i]) continue;
            
            
            perms.push_back(nums[i]);
            visited[i] = true;
            BruteForce(perms,nums,visited);
            visited[i] = false;
            perms.erase(perms.end()-1);
            
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>visited(nums.size(),false);
        vector<int>perms;
        BruteForce(perms,nums,visited);
        return result;
        
    }
    */
    
    vector<vector<int>> res;
    void bruteforce(vector<int> &nums,vector<int> num,vector<bool> visited){
        if(num.size() == nums.size() ) {

            res.push_back(num);
        }
        
        for(int i=0;i<nums.size();i++){
            if(visited[i]) continue;
            num.push_back(nums[i]);
            visited[i] = true;
            bruteforce(nums,num,visited);
            visited[i] = false;
            num.pop_back();
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> num;
        vector<bool> visited(nums.size(),false);
        bruteforce(nums,num,visited);
        return res;
    }
};