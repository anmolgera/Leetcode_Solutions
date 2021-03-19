class Solution {
public:
    bool backspaceCompare(string S, string T) {
    stack<int> st1;
    stack<int> st2;
        
    for(int i =0; i<S.length(); i++){
        if(S[i]!='#'){
            st1.push(S[i]);
        }
        
      else if(st1.size()) st1.pop();
    }
        
     for(int i =0; i<T.length(); i++){
        if(T[i]!='#'){
            st2.push(T[i]);
        }
        
      else if(st2.size()) st2.pop();
    }
    
    if(st1.size()!=st2.size()){
        return false;
    }
        
    while(st1.size()){
        if(st1.top()!=st2.top()){
            return false;
        }
        st1.pop();
        st2.pop();
    }
    
    return true;
    
    }
};