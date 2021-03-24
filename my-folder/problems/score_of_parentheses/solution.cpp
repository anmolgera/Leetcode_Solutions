class Solution {
public:
    int scoreOfParentheses(string s) {
     
    stack<int> st;
    st.push(0);
    for(int i =0; i<s.length(); i++){
        
        if(s[i]=='('){
            st.push(0);
        }
        
        else {
        int m = st.top();
        st.pop();
        if(m>0){
        m=2*m;    
        }
        
        else {
        m =1;    
        }
           
        st.top()+=m;
        }
    }
    return st.top();
    }
};