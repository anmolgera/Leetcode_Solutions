class Solution {
public:
    int largestRectangleArea(vector<int>& A) {
     
    stack<pair<int,int> > st;
  

    int n = A.size();
        
    vector<int> l(n,-1); // index of the nearest greater to left
    vector<int> r(n,n); // index of the nearest greater to right
        
    // finding nearest greater to left for all indexes
        
    st.push({A[0],0});
    for(int i =1; i<A.size(); i++){
        while(!st.empty() && st.top().first>=A[i]){
            st.pop();
        }
        if(st.empty()){
             st.push({A[i],i});
        }
        else {
            l[i] = st.top().second;
            st.push({A[i],i});
        }
    }
    
    
     while(!st.empty()){
        st.pop();
     }
    
    // finding nearest greater to right for all indexes
    st.push({A[n-1],n-1});
    for(int i = n-2; i>=0; i--){
        while(!st.empty() && st.top().first>=A[i]){
            st.pop();
        }
        
        if(st.empty()){
            st.push({A[i],i});
        }
        
        else {
            r[i] = st.top().second;
            st.push({A[i],i});
            
        }
    }
    
  /*  for(int i =0; i<n; i++){
        cout<<l[i]<<" ";
    }
    cout<<endl;
        
    for(int i =0; i<n; i++){
        cout<<r[i]<<" ";
    }
    
    cout<<endl;
    */
    int ans =0;
    for(int i = 0; i<n; i++){
        ans = max(ans,(r[i]-l[i]-1)*A[i]);
    }

     return ans;    
        
        
    
    }
};