class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        
        vector<int> v;
        
         if(matrix.size()==0){
            
            return v;
        }
        int startx =0;
        int starty =0;
        int endx =matrix.size()-1;
        int endy =matrix[0].size()-1;
        
       
        
        while(startx<=endx && starty <=endy){
            
          for(int i = starty; i<=endy; i++) v.push_back(matrix[startx][i]);
          for(int i = startx+1; i<=endx; i++) v.push_back(matrix[i][endy]);
            
           if(startx<endx && starty<endy){ 
        
          for(int i = endy-1; i>=starty; i--) v.push_back(matrix[endx][i]);  
          for(int i = endx-1; i>startx; i--) v.push_back(matrix[i][starty]);  
            
           }
           startx++;
            endx--;
            starty++;
            endy--;
            
            
            
            
        }
        
   
        return v;
        
        
        
        
        
    }
};