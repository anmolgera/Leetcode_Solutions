class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int sum =0;
        
        if(mat.size()==0){
            return 0;
        }
        
        if(mat.size()==1){
            
            return mat[0][0];
        }
        for(int i=0; i<mat.size(); i++){
            
            
            for(int j =0; j<mat[0].size(); j++){
                
                     if(i== j || (i+j == n-1)){
                         
                         sum+=mat[i][j];
                     }
                
                
            }
        }
        return sum;
        sum-=mat[(n-1)/2][(n-1)/2];
        //return sum;
    }
};