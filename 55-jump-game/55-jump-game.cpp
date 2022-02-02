class Solution {
public:
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
};