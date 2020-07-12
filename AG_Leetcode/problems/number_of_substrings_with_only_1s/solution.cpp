class Solution {
public:
    int numSub(string s) {
        
        long long int count =0;
        long long int sum =0;
        
        for(int i =0; i<s.length(); i++){
            
            if(s[i]=='1'){
                
                count++;
            }
            
            else {
                
                
                sum = (sum + (count*(count+1)/2)%1000000007)%1000000007;
                count =0;
            }
            
            
            
        }
        
        if(count!=0){
             
                     sum = (sum + (count*(count+1)/2)%1000000007)%1000000007;
           
        }
        
       return sum%1000000007; 
        
    }
};