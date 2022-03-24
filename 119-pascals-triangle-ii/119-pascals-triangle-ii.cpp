class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>result;
        
        
        result.push_back({1});
        result.push_back({1,1});
        
        for(int i=2;i<=rowIndex;i++){
            vector<int>temp;
            
            for(int j=0;j<=i;j++){
                if(j==0) temp.push_back(1);
                else if(j==i) temp.push_back(1);
                else{
                    temp.push_back(result[i-1][j-1]+result[i-1][j]);
                }
                
                
            }
                result.push_back(temp);
            
        }
        

        vector<int>res;
        for(int i=0;i<result[rowIndex].size();i++) res.push_back(result[rowIndex][i]);
        return res;
        
        
        
    }
};