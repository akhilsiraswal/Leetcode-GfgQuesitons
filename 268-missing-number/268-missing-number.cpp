class Solution {
public:
    
    
    // hash method.
    
    /*
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
    */
    
    // sum method.
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int anotherSum = 0;
        for(auto i:nums){
            anotherSum+=i;
        }
        return sum - anotherSum;
    }
};