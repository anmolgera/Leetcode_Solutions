class Solution {
public:
    int maxProfit(vector<int>& a) {
         
        int min = INT_MAX;
        int max_profit = 0;
        
        
        for(int i =0; i<a.size(); i++){
            
            if(a[i]<min){
                
                min = a[i];
            }
            
            if(a[i]-min > max_profit){
                
                
                max_profit = a[i]-min;
            }
            
            
            
            
        }
      return max_profit;
        
        
    }
};