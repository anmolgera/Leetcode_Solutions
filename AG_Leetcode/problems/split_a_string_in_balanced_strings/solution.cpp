class Solution {
public:
    int balancedStringSplit(string s) {
        
        
        
        int ans =0;
        int mx =0;
        int count =0;
        
        for(int i =0; i<s.length(); i++){
           
            if(s[i]=='L'){
                
                count++;
            }
            
            else count--;
            
            if(count==0){
                mx++;
            }
        }
        return mx;
    }
};