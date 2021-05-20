class Solution {
public:
    
    bool ispos(vector<int>& weights, int days, int upperlimit){
        
    int sum =0;
    int cnt =1;
    for(int i =0; i<weights.size(); i++){
        
        sum+=weights[i];
        if(sum>upperlimit){
            sum = weights[i];
            cnt++;
        }
        
        if(cnt>days){
            return false;
        }
        
        
    }
        
    return true;    
        
        
    }
    
    
    
    int shipWithinDays(vector<int>& weights, int days) {
    
     int rmax =0;
     int lmax =0;
     for(int i =0; i<weights.size(); i++){
         lmax = max(weights[i],lmax);
         rmax +=weights[i];

     }
        
     while(lmax<rmax){
         
         int mid = lmax +  (rmax-lmax)/2;
         if(ispos(weights, days, mid)){
             
             rmax = mid;
         }
         
         else {
             lmax = mid+1;
         }
         
     }  
        
     return lmax;
        
        
    }
};