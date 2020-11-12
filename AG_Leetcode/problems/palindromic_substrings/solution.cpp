class Solution {
public:
    
    void pallindromic(string s, int left, int right, int&ans){
        //bool flag = true;
        while(left>=0 && right<s.size() && s[left]==s[right]){
            
            ans++;
            left--;
            right++;
            
            
        }
       // flag = false;
        
        
        
        
        
        
    }
    
    
    
    
    
    int countSubstrings(string s) {
        
        int n = s.length();
        int ans =0;
        
        for(int i =0; i<n; i++){
            
            pallindromic(s,i,i,ans);
            pallindromic(s,i,i+1,ans);
            
            
            
            
            
        }
        
        return ans;
        
        
    }
};