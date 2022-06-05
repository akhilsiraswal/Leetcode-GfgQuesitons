class Solution {
public:
    
    
    bool isValid(vector<string> board,int row,int col,int n){
        int r=row,c=col;
        
        while(r>=0 && c>=0){
            if(board[r][c] == 'Q') return false;
            r--;
            c--;
        }
        r=row;c=col;
        
        while(c>=0){
            if(board[r][c] == 'Q') return false;
            c--;
        }
        
        r=row;c=col;
        
        while(r<n && c>=0){
            if(board[r][c] == 'Q') return false;
            r++;
            c--;
        }
        
        return true;
        
    }
    
    int solve(vector<string> &board,int n,int col){
        if(col >=n) return 1;
        int ans=0;
        for(int row = 0; row<n;row++){
            if(isValid(board,row,col,n)){
                board[row][col] = 'Q';
                ans+= solve(board,n,col+1);
                board[row][col] = '.';
            }
        }
        
        return ans;
        
    }
    
    int totalNQueens(int n) {
        
        vector<string> board(n);
        string s(n,'.');
        
        for(int i=0;i<n;i++) board[i] = s;
        
        return solve(board,n,0);
        
        
        
    }
};