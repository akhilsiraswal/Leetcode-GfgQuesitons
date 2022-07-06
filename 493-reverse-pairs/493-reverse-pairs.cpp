class Solution {
public:
    
    
    int merge(vector<int> &nums,int start,int mid,int end){
        int l = start,r=mid+1,k=0,size = end-start+1;
        
        int count=0;
        for(int i=l;i<=mid;i++){
            int j = mid+1;
            while(j<=end && nums[i] > 2LL *nums[j] )j++;
            count += (j-mid-1);
        }
        
        
        vector<int> sorted;
        while(l<=mid && r<=end){
            if(nums[l] <= nums[r]){
                sorted.push_back(nums[l++]);
                
            }else{
                
                sorted.push_back(nums[r++]);
            }
        }
        
        while(l<=mid) sorted.push_back(nums[l++]);
        while(r<=end) sorted.push_back(nums[r++]);
        
       for(int i=l;i<=r;i++){
           nums[i] = sorted[i-l];
       }
        return count;
    }
    
    int mergesort(vector<int> &nums,int start,int end ){
        if(start >=end) return 0;
        
        int mid = start + (end - start)/2;
        int c=0;
        
        c +=mergesort(nums,start,mid);
        c +=mergesort(nums,mid+1,end);
        
        for(int i=start,j=mid+1;i<=mid ;i++){
            while(j<=end && nums[i] > 2LL * nums[j]) j++;
            c+=(j-mid-1);
        }
        sort(nums.begin()+start,nums.begin()+end+1);
        // c += merge(nums,start,mid,end);
        
        return c;
        
    }
    
    int reversePairs(vector<int>& nums) {
       return mergesort(nums,0,nums.size()-1);
    }
};