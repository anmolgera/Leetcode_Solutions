class Solution {
public:
    
    int count(int n){
        int x =0;
        
        while(n){
            x+=n%2;
            n = n/2;
            
            
        }
        
        return x; 
        
        
    }
    
    
    
    vector<int> countBits(int num) {
        
        
        vector<int> v;
        v.push_back(0);
        
        
        for(int i =1; i<=num; i++){
            
            int y = count(i);
            v.push_back(y);
            
            
            
            
        }
        
       return v; 
        
    }
};