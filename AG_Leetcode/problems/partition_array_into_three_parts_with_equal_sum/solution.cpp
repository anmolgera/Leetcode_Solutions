class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        
        int sum =0;
        
        if(A.size()<3){
            
            return false;
        }
        
        
        bool status =  false;
        
        
        
        int count =0;
        for(int i =0; i<A.size(); i++){
            sum +=A[i];
            
           }
        
        int x =0,x1 =0;
        int y =0,y1 =0;
        int s1 =0,s11 =0;
        
        for(int i =0; i<A.size(); i++){
            
            s1 +=A[i];
            
            if(s1==sum/3){
                x++;
                s1 =0;
            }
            
            if(s1 == 2*sum/3){
                
                y++;
            }
            
        }
        
         for(int i =A.size()-1; i>0; i--){
            
            s11 +=A[i];
            
            if(s11==sum/3){
                x1++;
            }
            
            if(s11 == 2*sum/3){
                
                y1++;
            }
            
        }
        
        
        
        
        
        
        
        
        
        
         if(sum%3==0){
            
           status = true;
        }
        
      if(x>=3 && status){
          
          return true;
      }
        
        else return false;
    }
};