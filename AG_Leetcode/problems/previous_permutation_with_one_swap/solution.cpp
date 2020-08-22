class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& A) {
        
      if(A.size()<2){
          
          return A;
      }
        
     int left = A.size()-2;
        
      while(left>=0 && A[left+1]>=A[left]){
          
          left--;
      }  
        
        
        if(left<0){
            
            return A;
            
        }
        int index =0;
        int min = INT_MAX;
      
        for(int i = left+1; i<A.size(); i++){
            
            if(A[left]>A[i]){
                
                if((A[left]-A[i]) < min){
                    min = A[left]-A[i];
                    index = i;
                }  }         
            
        }
        
        
      swap(A[left],A[index]);
    return A;
        
        
        
        
        
        
    }
};