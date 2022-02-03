class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>result;
        int m=matrix.size(),n=matrix[0].size();
        
        int minr=0,maxr=m-1,minc=0,maxc=n-1,mn=m*n,c=0;
        
        while(c<mn){
            // top 
            for(int i=minr,j=minc;j<=maxc && c<mn ;j++ ){
                result.push_back(matrix[i][j]);
                c++;
            }
            minr++;
            
            // right layer..
            
            for(int i=minr,j=maxc;i<=maxr && c<mn ;i++){
                result.push_back(matrix[i][j]);
                c++;
            }
            maxc--;
            
            //bottom...
            
            for(int i=maxr,j=maxc;j>=minc && c<mn ;j--){
                result.push_back(matrix[i][j]);
                c++;
                
            }
            maxr--;
            // left.. 
            
            for( int i=maxr,j=minc;i>=minr && c<mn ;i--){
                result.push_back(matrix[i][j]);
                c++;
            }
            minc++;
            
            
            
        }
        return result;
        
        
        
        
        
       
        
        
        
        
        
        
    }
};