class Solution {
public:
    int maxWidthRamp(vector<int>& A) {
    stack<int> st;
    int n = A.size();
    for(int i =0; i<n; i++){
        
        if(st.empty() || A[st.top()]>A[i]){
            st.push(i);
        }
    }
    int res =0;    
    for(int i = n-1; i>=0; i--){
        
        while(!st.empty() && A[st.top()]<=A[i]){
         res = max(res,i-st.top());
         st.pop();
        }
        
    }
    return res;
    }
};