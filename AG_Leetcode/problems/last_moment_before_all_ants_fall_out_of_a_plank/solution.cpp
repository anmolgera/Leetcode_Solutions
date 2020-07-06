class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        
        int max1 =INT_MIN;
        int max2 = INT_MAX;
        for(int i =0; i<left.size(); i++){
            
            if(left[i]>max1){
                
                max1 = left[i];            }
            
        }
           
            
            
            
        
    
    
    
       for(int i =0; i<right.size(); i++){
           
           
           
           
           
            if(right[i]<max2){
                
                max2 = right[i];
            }
            
       }
        
        return max(max1,n-max2);
        
        
    }
};