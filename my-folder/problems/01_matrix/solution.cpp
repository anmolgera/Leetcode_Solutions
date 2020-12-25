class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int ax[4] = {-1,0,0,1};
        int ay[4] = {0,1,-1,0};
        vector<vector<int>> v(n,vector<int>(m,INT_MAX));
        
        for(int i =0; i<n; i++){
            
            for(int j =0; j<m; j++){
                if(matrix[i][j]==0){
                    v[i][j] =0;
                }
                
                else {
                    
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    int lev =0;
                    bool flag = false;
                    
                    while(!q.empty()){
                        int s = q.size();
                        while(s--){
                            
                            auto x = q.front();
                            q.pop();
                            
                            if(matrix[x.first][x.second]==0){
                                v[i][j] = lev;
                                flag = true;
                                break;
                            }
                            
                            for(int k =0; k<4; k++){
                                int x1 = x.first + ax[k];
                                int y1 = x.second + ay[k];
                                
                                if(x1<0 || y1 < 0 || x1>=n || y1>=m){
                                    continue;
                                }
                                
                                else {
                                    q.push({x1,y1});
                                }
                            }
                        }
                        //v[i][j] = lev;
                        if(flag) break;
                        lev++;
                        
                    }
                    
                    
                    
                }
                
            }
        }
        
        return v;
        
        
        
        
        
    }
};