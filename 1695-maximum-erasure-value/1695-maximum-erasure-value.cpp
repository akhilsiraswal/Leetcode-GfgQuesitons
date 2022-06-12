class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0,r=0,sum=0,ans=0;
        unordered_map<int,int>mp;
            while(r<nums.size()){
                int right = nums[r++];
                sum+=right;
                mp[right]++;
                
                while(mp[right]>1){
                    int left = nums[l++];
                    sum-=left;
                    mp[left]--; 
                }
                ans = max(sum,ans);
            } 
        return ans;
        
    }
};