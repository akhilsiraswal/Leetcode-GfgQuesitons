class Solution {
public:
    /*
    
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        vector<vector<int>>result(board.size(),vector<int>(board[0].size()));
        for(int i=0;i<n;i++){
            int m=board[i].size();
            for(int j=0;j<m;j++){
                int live=0;
                if(j+1<m){
                    if(board[i][j+1]==1) live++;
                }
                
                if(i+1<n){
                    if(board[i+1][j] == 1) live++;
                }
                
                if(j-1>=0){
                    if(board[i][j-1] == 1) live++;
                }
                
                if(i-1>=0) {
                    if(board[i-1][j] == 1) live++;
                    
                }
                
                if(i+1<n && j+1<m){
                    if(board[i+1][j+1] == 1) live++;
                }
                
                if(i-1 >=0 && j+1<m){
                    if(board[i-1][j+1] == 1) live++;
                }
                
                if(i+1<n && j-1>=0){

                    if(board[i+1][j-1] == 1) live++;
                }
                
                if(i-1>=0 && j-1>=0) {
                    if(board[i-1][j-1] == 1) live++;
                }
                
                if(board[i][j] == 1){

                    if(live < 2) {
                        board[i][j] =0;
                    }
                    else if(live>3)board[i][j] = 0;
                    else{
                        board[i][j] = 1;
                    }
                }else{
                    if(live == 3 ) board[i][j] =  1;
                }
                
                
//                 cout<<live<<" ";
                
                
                
            }
        }
        
        // board = result;
        
    }
    */
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        vector<int> temp;
        for(int i=0;i<n;i++){
            int m=board[i].size();
            for(int j=0;j<m;j++){
                int live=0;
                if(j+1<m){
                    if(board[i][j+1]==1) live++;
                }
                
                if(i+1<n){
                    if(board[i+1][j] == 1) live++;
                }
                
                if(j-1>=0){
                    if(board[i][j-1] == 1) live++;
                }
                
                if(i-1>=0) {
                    if(board[i-1][j] == 1) live++;
                    
                }
                
                if(i+1<n && j+1<m){
                    if(board[i+1][j+1] == 1) live++;
                }
                
                if(i-1 >=0 && j+1<m){
                    if(board[i-1][j+1] == 1) live++;
                }
                
                if(i+1<n && j-1>=0){

                    if(board[i+1][j-1] == 1) live++;
                }
                
                if(i-1>=0 && j-1>=0) {
                    if(board[i-1][j-1] == 1) live++;
                }
                
                temp.push_back(live);
                
                
                
            }
        }
        int k=0;
        
        for(int i=0;i<board.size();i++){

            for(int j=0;j<board[i].size();j++){
                    if(board[i][j] == 1){

                        if(temp[k] < 2) {
                            board[i][j] =0;
                        }
                        else if(temp[k]>3) board[i][j] = 0;
                        else{
                            board[i][j] = 1;
                        }
                }
                else
                {
                        
                    if(temp[k] == 3 ) board[i][j] =  1;
                }
                k++;
                
                
            }
        }
        
        
        
        
    }
};