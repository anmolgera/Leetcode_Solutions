class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        
        
        int mx =0;
        int m =0;
        int si =0;
        int ei =0;
        for(int i =0; i<seats.size(); i++){
            
            if(seats[i]==0){
                
                m++;
                
                if(m>mx){
                    
                    mx = m;
                  //  ei = i;
                }
                
                
            }
            
            else {
                
                
                m =0;
            }
            
            
            
        }
        
        
        
        
        
        int l =0;
        
        for(int i =0; i<seats.size(); i++){
            
            if(seats[i]==0){
                
                l++;
            }
            
            else break;
            
        }
        
        
        
        int r =0;
        
        for(int i = seats.size()-1; i>=0;i--){
            
            
            if(seats[i]==0){
                
                r++;
            }
      
            else break;
            
            
        }
        
      return max((mx+1)/2,max(l,r));  
    
        
    }
};