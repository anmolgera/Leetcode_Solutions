class Solution {
public:
    vector<int> numsSameConsecDiff(int N, int k) {
       
     vector<int> cur = {1,2,3,4,5,6,7,8,9,0};
        
        for(int i =2; i<=N; i++){
            vector<int> num;
            
            for(int i =0; i<cur.size(); i++){
                
                
                int rem = cur[i]%10;
                
                
                if(cur[i]> 0 && rem + k <10){
                    
                    
                    num.push_back(cur[i]*10+rem+k);
                }
                
                if(cur[i]>0 && rem-k >=0 && k>0){
                    
                    num.push_back(cur[i]*10+rem-k);
                }
                
                
                
            }
            
            cur = num;
            
            
            
            
            
            
            
        }
        
      return cur;  
        
    }
};