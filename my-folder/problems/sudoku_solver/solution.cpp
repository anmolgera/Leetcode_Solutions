class Solution {
public:
    bool isvalid(vector<vector<char>>& board, char x, int row, int col){
       for(int i =0; i<9; i++){
         
         if(board[i][col]==x){
             return false;
         }
      }   
        
     for(int i =0; i<9; i++){
         if(board[row][i]==x){
             return false;
         }
     }
     int y = row-row%3;  
     int z = col-col%3;
     for(int i =y; i<y+3; i++){
         for(int j = z; j<z+3; j++){
             if(board[i][j]==x){
                 return false;
             }
         }
     }
        
        
        
     return true;   
    
    }
    
    
bool solve( vector<vector<char>>& board)
    {
         
        for(int i =0; i<board.size(); i++){
            
            for(int j =0; j<board[i].size(); j++){
                
                if(board[i][j]=='.'){
                    for(char c ='1' ; c<='9'; c++){
                        if(isvalid(board,c,i,j)){
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
    
    void solveSudoku( vector<vector<char>>& board){
        int n = board.size();
        int m = board[0].size();
        if(n==0 || m==0) return;
        solve(board);
    }
  
};