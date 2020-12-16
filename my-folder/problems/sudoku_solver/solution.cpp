class Solution {
public:
    
    bool check (vector<vector<char>>& board, int row, int col , char c){
        
        for(int i =0; i<9; i++){
            if(board[row][i]==c){
                return false;
            }
        }
        
        for(int i =0; i<9; i++){
            if(board[i][col]==c){
                return false;
            }
        }
        
        int x = row-row%3;
        int y = col-col%3;
        
        for(int i =0; i<3; i++){
            for(int j =0; j<3; j++){
                if(board[i+x][j+y]==c){
                    return false;
                }
            }
        }
        return true;
    }
    
    bool solve(vector<vector<char>>& board){
            for(int i =0; i<board.size(); i++){
            for(int j =0; j<board[i].size(); j++){
               if(board[i][j]=='.') {
                   
                   for(char c ='1'; c<='9'; c++){
                       
                       if(check(board,i,j,c)){
                           board[i][j] = c;
                           if(solve(board)) return true;
                           board[i][j] ='.';
                       }
                   }
                   return false;
               }
                
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
               
        if(board.size()==0 || board[0].size()==0){
            return;
        }
        
        solve(board);
    }
};