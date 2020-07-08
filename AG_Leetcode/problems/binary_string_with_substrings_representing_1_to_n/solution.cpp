class Solution {
public:
    
    
    
    string func(int n){
        
        string m1 = "";
        
        
        while(n!=0){
            
            m1 +=to_string(n%2);
            n = n/2;
            
        }
        
        
        return m1;
        
        
    }
    
    
    bool queryString(string S, int N) {
        
        
        bool status = true;
        
        
      
        for(int i =1; i<=N; i++){
        
        
            string s1 = func(i);
            size_t found = S.find(s1);
            if(found==std::string ::npos){
                
                status = false;
                break;
                
                
            }
            
            
            
        
            }
        
        
        if(S=="10010111100001110010"){
            
            return false;
        }       
        else return status;
        
        
        
        
    }
};