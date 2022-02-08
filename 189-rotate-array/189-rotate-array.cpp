class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        k%=n;
        reverse(nums.begin(),nums.end()-k);
        // for(int i=0;i<n;i++)cout<<nums[i]<<" ";cout<<endl;
        reverse(nums.end()-k,nums.end());
        // for(int i=0;i<n;i++)cout<<nums[i]<<" ";cout<<endl;
        reverse(nums.begin(),nums.end());
        // for(int i=0;i<n;i++)cout<<nums[i]<<" ";cout<<endl;
    }
};