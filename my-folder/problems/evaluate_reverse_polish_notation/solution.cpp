class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int> st;
    st.push(0);
    for(int i =0; i<tokens.size(); i++){
        string s = tokens[i];
       
        
        if(s=="+" || s == "-" || s == "/" || s =="*") {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            string ch = tokens[i];
            if(ch == "+"){
               st.push(y+x); 
            }
            
            if(ch == "-"){
               st.push(y-x); 
            }
            
            if(ch == "*"){
                
                st.push(x*y);
            }
            
            if(ch =="/"){
                st.push(y/x);
            }
        }
        
         else {
            int x = stoi(tokens[i]);
            cout<<x<<endl;
            st.push(x);
        }
    }
    return st.top();
    }
};