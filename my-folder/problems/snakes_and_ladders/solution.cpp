class Solution {
public:
    
    pair<int,int> getcoordinate(int point , int n){
        
    int rowtop = (point-1)/n;
        
    int rowbottom = n-1-rowtop;
        
    int col = (point-1)%n;
        
    if(n%2 == rowbottom%2)
    col = n-1-col;    
    
    return {rowbottom,col};    
        
    }
    
    
    int snakesAndLadders(vector<vector<int>>& board) {
   
    int n = board.size();
    vector<bool> seen(n*n+100, false);
    queue<pair<int,int>> q;
    q.push({1,0});
    seen[1] = true;
    
    while(!q.empty()){
        
    auto i = q.front();
         q.pop();
    
    int s = i.first;
    int dist = i.second;
    if(s==n*n){
        return dist;
    }
        
    for(int j =1; s+j<=n*n && j<=6; j++){
        auto p = getcoordinate(s+j,n);
        int row = p.first;
        int col = p.second;
        int nextpoint;
        if(board[row][col]==-1) nextpoint = s+j;
        else nextpoint = board[row][col];
        
        if(seen[nextpoint]==false){
        seen[nextpoint] = true;
        q.push({nextpoint,dist+1});
        }
        
    }
        
    }
    return -1;
    
    }
};