class Solution {
public:
    int calculate(string s) {
    
    stack<int> st;
    st.push(1);
    int sign =1;
    long long num =0;
    int ans =0;
    for(int i =0; i<s.length(); i++){
        char ch = s[i];
        if(ch>='0' && ch<='9'){
        num = num*10 + ch-'0';
        
        }
        
        if(ch == '+' || ch == '-'){
        ans += num*sign;
        num =0;
        if(ch=='-'){
            sign = st.top()*(-1);
        }
        if(ch=='+'){
            sign = st.top()*1;
        }
    
        }
        
        
        if(ch =='('){
        st.push(sign);    
        }
        
        
        if(ch == ')'){
            
        st.pop();
        
        }
        
        
        
    }
    ans += sign*num;
    return ans;
       
    }
};