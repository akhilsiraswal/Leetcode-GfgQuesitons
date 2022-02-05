class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Naive Solution..
        int n1=nums1.size(),n2=nums2.size(),nums3[n1+n2],i=0,j=0,k=0;
        
        while(i<n1 || j<n2){
            if(i<n1 && j<n2 ){
                if(nums1[i]<nums2[j]){
                    nums3[k++]=nums1[i++];
                }else{
                    nums3[k++]=nums2[j++];
                }
            }else if(i<n1) nums3[k++]=nums1[i++];
            else if(j<n2) nums3[k++]=nums2[j++];
        }
        
        int n3=n1+n2;
        if(n3%2==0){
            int n=n3/2;
            return (double)(nums3[n]+nums3[n-1])/2;
        }else {
            return nums3[n3/2];
        }
        
        
        
    }
};