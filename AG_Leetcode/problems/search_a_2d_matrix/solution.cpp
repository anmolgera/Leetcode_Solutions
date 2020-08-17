class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      
    int r = matrix.size();
    if(r==0){
        
        return false;
    }
    int c = matrix[0].size();
        
   
        
        
    int i = 0;
    int j = c-1;
        
        
        while(i<r && j>=0){
            
            if(matrix[i][j]==target){
                
                return true;
            }
            
           else if(matrix[i][j] < target){
                
                i++;
            }
            
            else j--;
            
            
        }
         
         
         
         
         
     
        
    return false;
        }
     
};