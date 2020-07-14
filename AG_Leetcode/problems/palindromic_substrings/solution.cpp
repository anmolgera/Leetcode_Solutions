class Solution {
public:
    
    void pallindromic(string s, int left, int right, int&ans){
        
        while(left>=0 && right<s.size() && s[left]==s[right]){
            
            ans++;
            left--;
            right++;
            
            
        }
        
        
        
        
        
        
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