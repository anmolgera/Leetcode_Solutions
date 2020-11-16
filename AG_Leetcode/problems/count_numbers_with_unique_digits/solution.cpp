class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        
      if(n==0){
          return 1;
      }
      
      if(n==1){
          return 10;
      }  
        
        
       int x =9;
       int y =9;
        int res =10;
      for(int i =1; i<n; i++){
         y=y*x;
          res+=y;
          x--;
      }
        
        return res;
    }
};