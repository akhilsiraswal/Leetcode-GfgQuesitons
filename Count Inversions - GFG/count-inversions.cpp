// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    
    long long  merge(long long arr[] ,int start,int mid,int end){
        long long count=0,k=0;
        int l = start,r = mid+1,size = end - start+1;
        vector<long long > temp(size);
        
        while(l<=mid && r<=end){
            if(arr[l] <= arr[r]){
                temp[k++] = arr[l++];
            }else{
                temp[k++] = arr[r++];
                count += (mid - l+1);
            }
        }
        
        while(l<=mid) temp[k++] = arr[l++];
        while(r<=end) temp[k++] = arr[r++];
        
        for(k=0;k<size;k++) arr[k+start] = temp[k];
        
        return count;
    }
    
    long long  mergesort(long long arr[], long long start,long long end){
        long long count=0;
        if(start >= end) return 0;
        
            long long mid = (start+end)/2;
            
        count +=    mergesort(arr,start,mid);
        count +=    mergesort(arr,mid+1,end);
        count +=    merge(arr,start,mid,end);
        return count;
    }
    
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergesort(arr,0,N-1);
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends