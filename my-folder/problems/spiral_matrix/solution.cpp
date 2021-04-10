class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    
    vector<int> ans;
    if(matrix.size()==0){
        return ans;
    }
        
    int startx,starty,endx,endy;
    startx =0;
    starty =0;
    endx = matrix.size()-1;
    endy = matrix[0].size()-1;
        
    while(startx<=endx && starty<=endy){
    
    for(int i = starty; i<=endy; i++){ans.push_back(matrix[startx][i]); }
    for(int i = startx+1; i<=endx; i++){ ans.push_back(matrix[i][endy]);}
    
    if(startx<endx && starty<endy){
    for(int i = endy-1; i>=starty; i--) { ans.push_back(matrix[endx][i]);}
    for(int i = endx-1; i>=startx+1; i--) { ans.push_back(matrix[i][starty]);}
    }
    startx++;
    endx--;
    starty++;
    endy--;
        
    }
     return ans;  
    }
};