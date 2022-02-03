class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int rows[9][9]={0};
        int columns[9][9]={0};
        int block[3][3][9]={0};
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.'){
                    int number = board[i][j]-'1';
                    if(rows[i][number]++) return false;
                    if(columns[j][number]++) return false;
                    if(block[i/3][j/3][number]++) return false;
                }
            }
        }
        
        return true;
        
        
    }
};