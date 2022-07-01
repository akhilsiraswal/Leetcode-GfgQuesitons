class Solution {
public:
    
    vector<vector<int>>result;
    
    // TLE.. 
    
    /*
    
    /*
    void bruteforce2(vector<int>&nums,int idx){
        if(idx == nums.size()){
            result.push_back(nums);
        }
        
        for(int i=idx;i<nums.size();i++ ){
            swap(nums[idx],nums[i]);
            bruteforce2(nums,idx+1);
            swap(nums[idx],nums[i]);
        } 
    }
    */
    
    /*
    void bruteforce(vector<int>&perms,vector<int>&nums,vector<bool>visited){
        if(perms.size() == nums.size()){
            result.push_back(perms);
        }
        
        for(int i=0;i<nums.size();i++){
            if(visited[i])continue;
            perms.push_back(nums[i]);
            visited[i] =true;
            bruteforce(perms,nums,visited);
            visited[i] = false;
            perms.erase(perms.end()-1);
            
        }
    }
    */
    
    /*
    string getPermutation(int n, int k) {
        vector<int>nums,perms;
        vector<bool>visited(n,false);
        for(int i=1;i<=n;i++) nums.push_back(i);
        // bruteforce(perms,nums,visited);
        bruteforce2(nums,0);
        sort(result.begin(),result.end());
        string res="";
        for(int i=0;i<result[k-1].size();i++) res+=to_string(result[k-1][i]);
        
        return res;
    }
    */
    
    
    // ANOTHER METHOD... 
    
       string getPermutation(int n, int k) {
        vector<int> nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        
        while(k-- >1){
            int i=nums.size()-2;
        while(i>=0 && nums[i] >=nums[i+1] ) i--;
        
        
        if(i>=0){
            int j=nums.size()-1;
            while(nums[j] <= nums[i]) j--;
            
            swap(nums[i],nums[j]);
        }
        reverse(nums.begin()+i+1,nums.end());
            
        }
        
        string res="";
        for(auto i:nums) res+= to_string(i);
        
        return res;
        
    }
};