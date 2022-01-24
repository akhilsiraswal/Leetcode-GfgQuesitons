// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int>temp(n+m);
        int p=0,q=0,r=0;
        while(q<n && r<m  && p<n+m){
            if(arr1[q]<arr2[r]) temp[p++] = arr1[q++] ;
            else temp[p++] = arr2[r++];
        }
        
        while(q<n) temp[p++] = arr1[q++];
        while(r<m) temp[p++] = arr2[r++];
        return temp[k-1];
        
        
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends