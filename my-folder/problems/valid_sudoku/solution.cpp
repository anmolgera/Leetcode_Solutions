class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    
    int usedrow[9][9] ={};
    int usedcol[9][9] ={};
    int usedbox[9][9] ={};
        
    for(int i =0; i<board.size(); i++){
        for(int j =0; j<board[i].size(); j++){
        if(board[i][j]!='.')  {  
        int num = board[i][j]-'0'-1;
        int k = (i/3)*3 + j/3;
        if(usedrow[i][num] || usedcol[j][num] || usedbox[k][num]) return false;
        usedrow[i][num] = usedcol[j][num] = usedbox[k][num] =1;
        }
        }
    }
    return true;
    }
};