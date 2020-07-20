class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        
        bool arr[8][8];
        
        vector<vector<int>> v;
        
        
        for(int i =0; i<8; i++){
            
            
            for(int j =0; j<8; j++){
                
                
                arr[i][j] = false;
            }
            
            
            
            
            
        }
        
        
        
      for(int i =0; i<queens.size(); i++){
          
          
         int x = queens[i][0];
          int y = queens[i][1];
          
          if(arr[x][y]==false){
              
              
              
              arr[x][y] = true;
          }
          
          }
        
        
        
        for(int i =-1; i<=1; i++){
            
            
            for(int j =-1; j<=1; j++){
                
                
                if(i==0 && j==0){
                    
                    continue;
                }
                
             int x = king[0]+i,  y = king[1]+j;
                
                
                while(min(x,y)>=0 && max(x,y)<=7){
                    
                    
                    if(arr[x][y]){
                        
                        v.push_back({x,y});
                        break;
                    }
                    
                  x +=i;
                    y+=j;
                    
                }
                
            }
        }
        
        
        
      return v;  
        
        
        
        
        
        
        
    }
};