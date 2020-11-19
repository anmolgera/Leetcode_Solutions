class Solution {
public:
    
    int n,m;
    
    bool dfs(int i, int j , vector<vector<char>> & board , string word, int k){
        
        
        
        if(i< 0 || i>=n|| j<0 || j>=m){
            return false;
        }
        
        if(board[i][j]!=word[k]){
            return false;
        }
        
        if(k == word.length()-1){
            return true;
        }
        
        char ch = board[i][j];
        board[i][j] = '*';
        bool check = dfs(i,j+1,board,word,k+1)  || dfs(i,j-1,board,word,k+1)
                    || dfs(i+1,j,board,word,k+1)  || dfs(i-1,j,board,word,k+1) ;
        board[i][j] =ch;
        return check;
    }
    
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        
        if(words.size()==0){
            return {};
        }
        
        if(board.size()==0){
            return {};
        }
        
          n = board.size();
          m = board[0].size();
        
        vector<string> v;
        set<string> s;
        map<string,int> mp;
        for(int k =0; k<words.size(); k++){
        
        for(int i =0; i<n; i++){
            
            for(int j =0; j<m; j++){
                
                if(dfs(i,j,board,words[k],0)){
                    mp[words[k]]++;
                    
                }
            }
        }
        
        }
        
        for(auto i: mp){
            v.push_back(i.first);
        }
        
        return v;
    }
};