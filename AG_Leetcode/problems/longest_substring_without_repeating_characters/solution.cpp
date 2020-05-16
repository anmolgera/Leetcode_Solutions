class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
      unordered_set<char> si;
        
        int i =0,j=0, n = s.length(),ans =0;
        
      while(i<n &&j <n){
          
          
        if(si.find(s[j])==si.end()){
            
            
            
            si.insert(s[j++]);
            ans = max(ans,j-i);
            
        }  
          
        else si.erase(s[i++]);
          
          
          
          
      } 
        
    
      return ans;  
        
        
        
        
    }
};