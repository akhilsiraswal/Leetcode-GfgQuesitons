class Solution {
public:
    
    static bool cmp(int a,int b){
        if(a == 0) return false;
        else if(b==0) return true;
        else return true;
    }
    int removeElement(vector<int>& nums, int val) {
        int c=0,n=nums.size();
        for(int i=0;i<n;i++) if(val == nums[i]) c++;
        int j=n-1,i=0;
        while(i<j){
            if(val == nums[i]){
                swap(nums[i],nums[j--]);
            }else i++;
        }
        
        
        return n-c;
    }
};