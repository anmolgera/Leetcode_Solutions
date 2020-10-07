class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        
        int count =0;
        int sum =0;
        
        
        for(int i =2; i<A.size(); i++){
            
            if(A[i]-A[i-1]==A[i-1]-A[i-2]){
                
                count++;
            }
            
            else{
                
                sum+=count*(count+1)/2;
                count =0;
                
            }
            
            
            
        }
        
        
        
        
     return sum+=count*(count+1)/2;   
        
        
        
        
        
    }
};