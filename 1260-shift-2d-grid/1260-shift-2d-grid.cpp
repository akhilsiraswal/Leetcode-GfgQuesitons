class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        for(int i=0;i<k;i++){
            for(int i=grid.size()-1;i>=0;i--){
                for(int j=grid[i].size()-1;j>0;j--){
                    swap(grid[i][j],grid[i][j-1]);
                }
            }
            
            for(int i=0;i<grid.size();i++){
                swap(grid[i][0],grid[grid.size()-1][0]);
            }
            
        }
        
        // for(int i=0;i<grid.size();i++) for(int j=0;j<grid[i].size();j++) {cout<<grid[i][j]<<" ";}cout<<endl;
        
        return grid;
        
    }
};