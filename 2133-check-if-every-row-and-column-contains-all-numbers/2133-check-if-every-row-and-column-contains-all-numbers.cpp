class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        for(int i=0;i<matrix.size();i++){
            unordered_set<int>st1,st2;
            for(int j=0;j<matrix[i].size();j++){
               st1.insert(matrix[i][j]);
                st2.insert(matrix[j][i]);
            }
            
            
            if((st1.size() != matrix.size()) || (st2.size()!=matrix.size()) ) return false;
            st1.clear();
            st2.clear();
        }
        return true;
        
    }
};