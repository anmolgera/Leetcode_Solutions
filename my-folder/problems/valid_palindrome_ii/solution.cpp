class Solution {
public:
    
    bool ispallindrome(string &s, int i , int j){
     
        //int i =0;
        //int j = s.length()-1;
        
        while(i<j){
            
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
            
        }
        
        return true;
        
        
    }
    bool validPalindrome(string s) {
        
        int i =0;
        int j = s.length()-1;
        while(i<j){
            
            if(s[i]!=s[j]){
               return ispallindrome(s,i+1,j) || ispallindrome(s,i,j-1);
            }
            i++;
            j--;
        }
       return true;
    }
};