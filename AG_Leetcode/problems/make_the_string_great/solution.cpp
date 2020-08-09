class Solution {
public:
    string makeGood(string s) {
        
     string res ="" ;
        
        int n = s.length();
        for(int j =0; j<n; j++){
        
         for(int i =1; i<s.length(); i++){
             
            if(s[i]-s[i-1]==32 || s[i-1]-s[i]==32){
                
                
                s.erase(i-1,2);
               // s.erase(s.begin()+i);
              
                
            }
         }
             
        }
        
        return s;
      
    }
};