class Solution {
public:
    int x[8] = {0,0,1,-1};
    int y[8] = {1,-1,0,0};
    int cnt=0;
    int cnt2 =0;
    
    int orangesRotting(vector<vector<int>>& grid) {
    queue<pair<int,int>> q;
    //if(grid.size()==1 && grid[0].size()==1 && grid[0][0]==0) return 0;
    //if(grid.size()==1 && grid[0].size()==1 && grid[0][0]==1) return -1;
    for(int i =0; i<grid.size(); i++){
        
        for(int j =0; j<grid[i].size(); j++){
            
            if(grid[i][j]==2){
                q.push({i,j});
                cnt++;
                cnt2++;
            }
            if(grid[i][j]==1){
                cnt++;
            }
        }
    }
    int lev =0;
    cout<<q.size()<<endl;
    while(!q.empty()){
        int s = q.size();
        while(s--){
        auto i = q.front();
        q.pop();
       
        for(int j =0; j<4; j++){
         int x1 =i.first + x[j];
         int y1 =i.second + y[j];
         if(x1<0 ||  y1<0 || x1>=grid.size() || y1>=grid[0].size() || grid[x1][y1]!=1){
             //q.push({x1,y1});
             continue;
         }
         else {
             grid[x1][y1]=2;
             q.push({x1,y1});
             cnt2++;
         }
         
        }
        }
        lev++;
    }
    if(cnt==cnt2) return max(lev-1,0);
    else return -1;
    }
};