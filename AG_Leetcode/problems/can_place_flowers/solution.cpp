class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int zerocount =0;
        for(int i =0; i<flowerbed.size(); i++){
            if(flowerbed[i]==0){
                zerocount++;
            }
            
        }
        
        
        if(zerocount==flowerbed.size()){
            
          
            return (zerocount+1)/2 >=n;
            
        }
        
        else {
        int count=0;
        int max_sum=0;
        int count1=0;
        
        
        
        for(int i =0; i<flowerbed.size(); i++){
            
            if(flowerbed[i]==0 ){
                
                count++;
                if(i==0) count++;
                if(i==flowerbed.size()-1) {count++;
                                           max_sum +=(count-1)/2;
                    
                    
                                           }
                
    
                
            }
            
            else {
                
                max_sum += (count-1)/2;
                count =0;
            }
            
            
        }
        
        if(max_sum>=n){
            
            return true;
        }
        
        return false;
            
        }
        
        
        
        
    }
};