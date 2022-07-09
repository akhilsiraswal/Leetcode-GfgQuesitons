class Solution {
public:
    /*
    
    bool canJump(vector<int>& nums) {
        int n=nums.size(),i=n-1;
        while(i>=1){
            if(nums[i-1]+i-1 >= i) i--;
            else{
                int j=i,k=i;
                while( k>0 &&  nums[k-1]+k-1< j )k--;
                i=k;
                if(k==0) return false;
            }
            
        }
        return true;
    }
    */
    
    bool bruteforce(vector<int>&nums,int idx,vector<int> &dp){

        if(idx >= nums.size()-1) return true;
        
        if(dp[idx]!= -1) return dp[idx];
        bool ans=false;
        for(int i=idx+nums[idx];i>idx;i--){
            ans=  bruteforce(nums,i,dp);
           if(ans) return true;
        }
        return dp[idx] = ans;
    }
     bool canJump(vector<int>& nums) {
         vector<int> dp(nums.size()+1,-1);
         return bruteforce(nums,0,dp);
     }
};