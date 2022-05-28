class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size()+1;
        vector<int>temp(n,0);
        // memset(temp,temp+n,0);
        for(auto i:nums){
            temp[i]++;
        }
        for(int i=0;i<=n;i++){
            if( temp[i] == 0) return i; 
         }
        
        return 0;
        
    }
};