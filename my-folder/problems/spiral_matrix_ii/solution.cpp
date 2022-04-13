class Solution {
public:

        vector<vector<int>> generateMatrix(int n) {
        
       if(n==0){
           
           return {};
       }
        
       int r =n;
       int c = n;
       vector<vector<int>> ans (n,vector<int>(n,0));
        
       int startx =0;
       int endx = n-1;
       int starty =0;
       int endy = n-1;
       
    int j =1;    
    while(startx<=endx && starty<=endy){
        
        for(int i = starty ; i <= endy; i++) ans[startx][i] = j++;
        for(int i = startx+1 ; i <= endx; i++) ans[i][endy] = j++;
        
        
        if(startx<endx && starty<endy){
            
            
        for(int i = endy-1 ; i >=starty; i--) ans[endx][i] = j++;
        for(int i = endx-1 ; i >startx; i--) ans[i][starty] = j++;
            
            
            
            
        }
        
        startx++;
        endx--;
        starty++;
        endy--;
        
        
        
        
        
        
    }
       
        
      return ans;  
        
        
        
     
    }
};