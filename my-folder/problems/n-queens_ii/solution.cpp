class Solution {
public:
    
      bool isvalid(vector<string> &Nqueens, int row, int col, int n){
        for(int i =0; i<row; i++){
            if(Nqueens[i][col]=='Q'){       // 90*
                return false;
            }
        }
        
        for(int i = row,j = col; i>=0 && j>=0; i--,j--){
            if(Nqueens[i][j]=='Q'){                       //45*
                return false;
            }
            
        }
        
         for(int i = row,j = col; i>=0 && j<n; i--,j++){
            if(Nqueens[i][j]=='Q'){                      //135*
                return false; 
            }  
            
        }
        return true;
    }
    
    void backtrack( vector<vector<string>> &v,  vector<string> &Nqueens, int row, int n){
        
        if(row==n){
            vector<string> chess = Nqueens;
            v.push_back(chess);
            return;
        }
        
        for(int col =0; col<n; col++){
            
            if(isvalid(Nqueens,row,col,n)){
                Nqueens[row][col] = 'Q';
                backtrack(v, Nqueens, row + 1, n);
                Nqueens[row][col] = '.';
            }
        }
        
        return;
        
    }
    
    
    
   /* vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> v;
        vector<string> Nqueens(n,string(n,'.'));
        backtrack(v,Nqueens, 0,n);
        return v;
    }*/
    int totalNQueens(int n) {
        vector<vector<string>> v;
        vector<string> Nqueens(n,string(n,'.'));
        backtrack(v,Nqueens, 0,n);
        return v.size();
    }
};