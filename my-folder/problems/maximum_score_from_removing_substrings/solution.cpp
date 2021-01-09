class Solution {
public:
    int maximumGain(string s, int x, int y) {
        
      
        stack<char> st;
        int ans =0;
        int sum =0;
        if(x>y){
            ans =1;
        }
        
        else ans =2;
        
        if(ans==1){
            for(int i =0; i<s.length(); i++){
                if(s[i]!='b'){
                    st.push(s[i]);
                }
                else {
                    if(!st.empty() && st.top()=='a'){
                        sum+=x;
                        st.pop();
                    }
                    else {
                        st.push(s[i]);
                    }
                }
            }
            
            s = "";
            while(!st.empty()){
                char s2 = st.top();
                s+=s2;
                st.pop();
            }
            reverse(s.begin(),s.end());
            for(int i =0; i<s.length(); i++){
                if(s[i]!='a'){
                    st.push(s[i]);
                }
                else {
                    if(!st.empty() && st.top()=='b'){
                        sum+=y;
                        st.pop();
                    }
                    else {
                        st.push(s[i]);
                    }
                }
            }
            return sum;
        }
        
        else {
            
          for(int i =0; i<s.length(); i++){
                if(s[i]!='a'){
                    st.push(s[i]);
                }
                else {
                    if(!st.empty() && st.top()=='b'){
                        sum+=y;
                        st.pop();
                    }
                    else {
                        st.push(s[i]);
                    }
                }
            }
            
            s = "";
            while(!st.empty()){
                char s2 = st.top();
                s+=s2;
                st.pop();
            }
            reverse(s.begin(),s.end());
            for(int i =0; i<s.length(); i++){
                if(s[i]!='b'){
                    st.push(s[i]);
                }
                else {
                    if(!st.empty() && st.top()=='a'){
                        sum+=x;
                        st.pop();
                    }
                    else {
                        st.push(s[i]);
                    }
                }
            }
            return sum;
            
        }
        
        
       return 0; 
        
    }
};