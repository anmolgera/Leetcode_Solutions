class Solution {
public:
    
    bool check ( string &s, string &t){
       int i =0;
       for(char c : s){
           
          if(c == t[i] && i<t.length()){
              i++;
          } 
           
         else if(c<'a'){
              
              return false;
          }
           
       }
        
        
       return i == t.length(); 
        
    }
    
    
    
    vector<bool> camelMatch(vector<string>& queries, string pattern) {
       vector<bool> res; 
      for(string i : queries){
         res.push_back(check(i,pattern)); 
          
      }  
        
      return res;  
    }
};