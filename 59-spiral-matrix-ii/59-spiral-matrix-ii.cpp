class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int num=0;
        vector<vector<int>>nums(n,vector<int>(n));
        int rmin=0,rmax=n-1,cmin=0,cmax=n-1;
        
       while(num<n*n){
           
           // up..
           
           for(int i=rmin,j=cmin;j<=cmax&&  num < n*n  ;j++){
               nums[i][j] = ++num;
           }
           rmin++;
           // right..
           for(int  i=rmin,j=cmax;i<=rmax &&num < n*n ;i++){
               nums[i][j] = ++num;
               
           }
           cmax--;
           
           // down..
           for(int i=rmax,j=cmax;j>=cmin &&num < n*n ;j--){
               nums[i][j] = ++num;
               
           }
           rmax--;
           
           // left.. 
           for(int i=rmax,j=cmin;i>=rmin&& num < n*n ;i--){
               nums[i][j] = ++num;
           
           }
           cmin++;
           
           
           
       }
        
        
        
        
        vector<vector<int>>res;
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<n;j++) {
                temp.push_back(nums[i][j]);
            }
            res.push_back(temp);
        }
        return res;
        
        
        
        
        
    }
};