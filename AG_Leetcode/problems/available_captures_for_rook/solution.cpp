class Solution {
public:
    
    
    
    int dfs(vector<vector<char>>&b, int x, int y , int dx, int dy){
        
        while(x>=0 && x<8 && y>=0 && y<8 && b[x][y]!='B'){
            
            if(b[x][y]=='p'){
                
                return 1;
            }
            
            x +=dx;
            y +=dy;
            
        }
        
        return 0;
        
        
        
    }
    int numRookCaptures(vector<vector<char>>& b) {
        
      
        for(int i =0; i<8; i++){
            
            
            for(int j =0; j<8; j++ ){
                
                
                if(b[i][j]=='R'){
                    
                    
                  return   dfs(b,i,j,0,1)+
                    dfs(b,i,j,0,-1)+
                    dfs(b,i,j,1,0)+
                    dfs(b,i,j,-1,0);
                }
            }
        }
        
        return 0;
    }
};