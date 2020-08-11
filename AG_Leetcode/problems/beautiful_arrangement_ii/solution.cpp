class Solution {
public:
    vector<int> constructArray(int n, int k) {
        
        
        vector<int> res;
        int j=1;
        int r = k+1;
        
        
        while(j<=r){
            res.push_back(j++);
            if(j<r) res.push_back(r--);
            
            
        }
        
        
        for(int i = k+2; i<=n; i++){
            
            res.push_back(i);
        }
        
      return  res;  
    }
};