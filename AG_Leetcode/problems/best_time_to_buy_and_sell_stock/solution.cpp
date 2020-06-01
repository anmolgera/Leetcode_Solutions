class Solution {
public:
    int maxProfit(vector<int>&A) {
    int mx = 0;    
    int n = A.size();    
        int sum =0;
    
     int proft =0;   
    for(int i =1; i<n; i++){
        
        if(A[i]-A[i-1] + sum >=0){
            
            sum += A[i]-A[i-1];
            
            
            
            if(sum>mx){
                
                mx = sum;
            }
        }
        
        else {
            
            sum =0;
        }
        
        
        
        
    }
        
    return mx;    
        
    }
};