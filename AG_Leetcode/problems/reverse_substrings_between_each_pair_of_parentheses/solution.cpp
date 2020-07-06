class Solution {
public:
    string reverseParentheses(string s) {
        
        
        stack<char> st;
        string ans ="";
        
        
        
        for(int i =0; i<s.length(); i++){
            
             if(s[i]!=')'){
                 
                 
                 
                 st.push(s[i]);
                 
                 
                 
                 
             }
            
            
            else{
                
                ans ="";
                while(!st.empty() && st.top()!='('){
                    
                    
                    
                    ans +=st.top();
                    st.pop();
                }
                
                st.pop();
                
                for(int i =0; i<ans.length(); i++){
                    
                    st.push(ans[i]);
                }
                
                
                
                
                
            }
            
         }
        
        
        ans ="";
        
         while(!st.empty()){
             
             
             ans +=st.top();
             st.pop();
             
             
             
             
             
             
         }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
        
        
        
        
        
    }
};