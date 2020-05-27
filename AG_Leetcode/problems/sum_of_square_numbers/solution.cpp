class Solution {
public:
    
    bool binary_sea (int s, int e, int num){
        
        while(s<=e){
            
          long long int mid = s+ (e-s)/2;
          
           if(mid*mid == num){
               return true;
           }
            
          if(mid*mid >num){
              
              e = mid-1;
          }  
            
          else {
              
              s = mid+1;
          }  
        }
        
        
       return false; 
        
        
        
    }
    
    
    
    
    
    bool judgeSquareSum(int c) {
        
        long long int a =0;
        for(; a*a <=c; a++){
            int b = c-(int)(a*a);
            
            
            if(binary_sea(0,b,b)){
                return true;
            }
            
            
        }
        
        
        return false;
        
        
    }
};