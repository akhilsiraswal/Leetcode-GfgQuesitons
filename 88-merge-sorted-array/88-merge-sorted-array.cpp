class Solution {
public:
    /*

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>result;
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                result.push_back(nums1[i++]);
            }else{
                result.push_back(nums2[j++]);
            }
        }
        
        while(i<m) result.push_back(nums1[i++]);
        while(j<n) result.push_back(nums2[j++]);
        
        for(int i=0;i<nums1.size();i++) nums1[i] = result[i];
        
        
       
    }
    */
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        
        while(i>=0 && j>=0){
            if(nums2[j]>=nums1[i]){
                nums1[k--] = nums2[j--];
            }else nums1[k--] = nums1[i--];
        }
        
        while(i>=0) nums1[k--] = nums1[i--];
        while(j>=0) nums1[k--] = nums2[j--];
        
    }
};