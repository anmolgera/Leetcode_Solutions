class Solution {
public:
    string countAndSay(int n) {
        
        if(n==0){
            
            return "";
        }
        string res ="1";
        if (n==1 ) return res;
        
         n = n-1 ;  // follow ahead and you will understand
        
        while(n--){
            string curr ="";
            for(int i =0; i<res.size(); i++){
                
                int count =1;
                
                while(res[i]==res[i+1] && (i+1)<res.size()){
                    
                    count++;
                    i++;
                    
                    
                }
                
               curr+= to_string(count) + res[i];
                
                
            }
            
            res = curr;
            
            
            
            
            
            
            
        }
        
        return res;
        
        
        
    }
};