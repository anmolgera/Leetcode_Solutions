class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        //int m = grid[0].size();
        
         if(n==0){
             return 0;
         }
        
        int ax[8] = {1,1,1,0,0,-1,-1,-1};
        
        int ay[8] = {1,-1,0,-1,1,0,1,-1};
        
        int x = grid[0][0];
        int y = grid[n-1][n-1];
        if(x==1 || y==1){
            return -1;
        }
        
        queue<pair<pair<int,int>,int>> q;
        q.push({{0,0},1});
        int ans = -1;
        bool flag = true;
        vector<vector<int>> v(n,vector<int>(n,0));
        //vis[0][0] =1;
        v[0][0] =1;
        while(!q.empty()){
            int s = q.size();
            
            while(s--){
            auto x = q.front();
            q.pop();
            int x1 = x.first.first;
            int y1 = x.first.second;
            //v[x1][y1] =1;
            
            if(x1==n-1 && y1 ==n-1){
                flag = false;
                ans = x.second;
                break;
            }
            
            
            for(int i =0; i<8; i++){
                
                int a = x1+ax[i];
                int b = y1+ay[i];
                
                if(a<0 || b<0 || a>=n || b>=n){
                    continue;
                }
                
             
                if(grid[a][b]==0 && v[a][b]==0){
                    q.push({{a,b},x.second+1});
                    v[a][b] =1;
                }
                else continue;
            }
            
            
            
            } 
            
            if(!flag) break;
            
        }
        return ans;
    }
};