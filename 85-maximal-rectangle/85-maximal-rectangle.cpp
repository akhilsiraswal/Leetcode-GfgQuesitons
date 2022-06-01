class Solution {
public:
    
      int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int> stl,str;
        vector<int> l(n),r(n);
        
        for(int i=n-1;i>=0;i--){
            
            if(str.empty()){

                r[i] = n-1;
            }else{
                
                while(!str.empty() && heights[str.top()] >= heights[i] ) str.pop();
                r[i] = str.empty()?n-1:str.top()-1;
            }
            
                str.push(i);
        }
        
        for(int i=0;i<n;i++){
            
            if(stl.empty()){
                l[i] = 0;
            }else{
                
                while(!stl.empty() && heights[stl.top()] >= heights[i] ) stl.pop();
                l[i] = stl.empty()?0:stl.top()+1;
            }
                stl.push(i);
            
        }
        
        int res=0;
        
        for(int i=0;i<n;i++){
            res = max( res, (r[i]-l[i]+1)*heights[i] );
            
        }
        return res;
        
        
        
        
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size(),n=matrix[0].size();
        vector<vector<int>> mat(m,vector<int>(n));
            
        // cout<<mat.size()<<" "<<m<<endl;
        // cout<<mat[0].size()<<" "<<n<<endl;
        

        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                mat[i][j] = matrix[i][j] - '0';
            }
        }
        
        for(int i=1;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(mat[i][j]) mat[i][j] += mat[i-1][j];
            }
        }
        
        int res=INT_MIN;
        for(int i=0;i<mat.size();i++){
            vector<int> heights;
            for(int j=0;j<mat[i].size();j++){
                heights.push_back(mat[i][j]);
            }
            
            res = max(res,largestRectangleArea(heights));
            
            
        }
        
        return res;
           
        
    }
};