// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       long long int prod = 1,flag=0;
       for (auto i:nums) {
           if(i!=0) prod*=i;
           else flag++;
       }
       vector<long long int >result(n);
      for(int i=0;i<n;i++){
         if(flag==1 && nums[i]!=0 ) result[i] = 0;
         else if (nums[i] == 0 && flag == 1  ) result[i] = prod;
         else if (flag>1) result[i] = 0;
         else result[i] = prod/nums[i];
          
      }
       return result;
        //code here        
    }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends