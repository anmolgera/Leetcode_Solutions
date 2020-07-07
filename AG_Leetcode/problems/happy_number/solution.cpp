class Solution {
public:
    
    int numsquare(int n){
        
        int count =0;
        while(n){
            
            count+=  (n%10)*(n%10);
            n = n/10;
            
            
            
        }
        
        return count;
        
        
        
    }
    
    
    
    
    
    
    bool isHappy(int n) {
        
        set<int> s;
        
        while(1){
            
            
            n = numsquare(n);
            
            if(n==1){
                
                return true;
            }
            
            if(s.find(n)!=s.end()){
                return false;
            }
            
            s.insert(n);
            
        }
        
        
        
        
        
        
    }
};