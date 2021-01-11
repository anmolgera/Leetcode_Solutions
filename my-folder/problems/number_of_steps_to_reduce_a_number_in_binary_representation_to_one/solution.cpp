class Solution {
public:
    int numSteps(string s) {
        int ans =0;
        int n = s.length();
        for(int i =n-1; i>=1; i--){
            
            if(s[i]=='0'){
                ans++;
            }
            
            else {
                  bool flag = true;
                  int last = i;
                  while(last){
                      
                      if(s[last]=='0'){
                          s[last] = '1';
                          ans+=2;
                          flag = false;
                          break;
                      }
                      last--;
                  }
                 
                 if(flag){
                     ans+=i+2;
                     break;
                 }
                
                
                
                
                
            }
            
            
            
        }
        return ans;
    }
};