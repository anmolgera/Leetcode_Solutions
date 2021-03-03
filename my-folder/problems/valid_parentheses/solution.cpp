class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i : s){
            if(i=='(' || i=='[' || i=='{'){
                st.push(i);
            }
            
            else if(st.empty()){
                
                return false;
            }
            
            else if(!st.empty()){
                if(st.top()=='('){
                    if(i==')'){
                        st.pop();
                    }
                    else return false;
                }
                
               else  if(st.top()=='['){
                    if(i==']'){
                        st.pop();
                    }
                    else return false;
                }
                
               else  if(st.top()=='{'){
                    if(i=='}'){
                        st.pop();
                    }
                    else return false;
                }
                
            }
            
            
        }
        
        return st.size()==0;
    }
};