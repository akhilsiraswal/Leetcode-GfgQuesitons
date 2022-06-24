class Solution {
public:
    /*
    vector<vector<int>> generate(int numRows) {
        vector<int>temp;
        vector<vector<int>>result;
        if(numRows == 0) return result;
        
        result.push_back({1});
        if(numRows == 1) return result;
        result.push_back({1,1});
        if(numRows == 2) return result;
        
        
        
        for(int i=2;i<numRows;i++){
            vector<int>temp2;
            for(int j=0;j<=i;j++){
                if(j==0) temp2.push_back(1);
                else if(j==i) temp2.push_back(1);
                else{
                    temp2.push_back(result[i-1][j-1]+result[i-1][j]);
                }
            }
            result.push_back(temp2);
            
            
        }
        
        return result;
    }
    */
     vector<vector<int>> generate(int numRows) {
         vector<vector<int>> res;
         if(numRows==0) return res;
         res.push_back({1});
         if(numRows == 1) return res;
         res.push_back({1,1});
         if(numRows == 2) return res;
         
         for(int i=2;i<numRows;i++){
             vector<int> temp;
             for(int j=0;j<=i;j++){
                 if(j==0 || j== i) temp.push_back(1);
                else {
                    temp.push_back(res[i-1][j-1]+res[i-1][j]);
                }
             }
             res.push_back(temp);
         }
         return res;
     }
};