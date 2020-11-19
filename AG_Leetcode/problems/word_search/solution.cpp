class Solution {
public:
    
    int n,m;
    bool dfs(int i, int j, vector<vector<char>>& board, string word, int k){
        
        cout<<"HI"<<endl;
        
        if(i< 0 || i>=n || j<0 || j>=m){
            return false;
        }
        
        if(board[i][j]!=word[k]){
            return false;
        }
        
        if(k == word.length()-1){
            return true;
        }
        char ch = board[i][j];
        board[i][j] ='*';
        
        bool check = dfs(i+1,j,board,word,k+1)  || dfs(i,j+1,board,word,k+1) ||dfs(i,j-1,board,word,k+1) 
                   || dfs(i-1,j,board,word,k+1) ;
        
        
        board[i][j] = ch;
        
        return check;
        
        
        
        
        
        
        
        
        
        
        
    }
    
    
    
    
    bool exist(vector<vector<char>>& board, string word) {
        
        if(word.empty()){
            return true;
        }
        
         n = board.size();
         m = board[0].size();
        
        if(n==0){
            return 0;
        }
        
        
        for(int i =0; i<n; i++){
            
            for(int j =0; j<m; j++){
                
                if(dfs(i,j,board,word,0)){
                    return true;
                }
            }
        }
        return false;
        
    }
};