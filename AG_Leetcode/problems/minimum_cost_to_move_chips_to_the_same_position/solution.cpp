class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        
        int n = chips.size();
        
       
          int counto =0;
          int counte =0;
          for(int i =0; i<chips.size(); i++){
              
              if(chips[i]%2){
                  
                  counto++;
              }
              
              else counte++;
              
              
          }
          
      
        
        
        if(counto ==0 || counte ==0){
            
            return 0;
        }
        
        else {
            
            
            return min(counte,counto);
        }
  
          
      }
      
  
    
    
    
    
    
};