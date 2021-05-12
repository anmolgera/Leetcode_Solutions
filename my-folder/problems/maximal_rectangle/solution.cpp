class Solution {
public:
    
    int mah(vector<int> &heights){
        
        int n = heights.size();
        vector<int> l(n,-1);
        vector<int> r(n,n);
        stack<pair<int,int>> st;
        st.push({heights[0],0});
        for(int i =1; i<heights.size(); i++){
            while(!st.empty() && st.top().first>=heights[i]){
                st.pop();
                
            }
            if(st.empty()){
                st.push({heights[i],i});
            }
            else {
                l[i] = st.top().second;
                st.push({heights[i],i});
            }
        }
        while(!st.empty()){
            st.pop();
        }
        
        st.push({heights[n-1],n-1});
        for(int i =n-2; i>=0; i--){
            while(!st.empty() && st.top().first>=heights[i]){
                st.pop();
                
            }
            if(st.empty()){
                st.push({heights[i],i});
            }
            else {
                r[i] = st.top().second;
                st.push({heights[i],i});
            }
        }
       int m =0;
       for(int i =0; i<n; i++){
           m = max(m,((r[i]-l[i]-1)*heights[i]));
       }
      
      /* for(int i =0; i<n; i++){
           cout<<l[i]<<" ";
       }
       cout<<endl;
       for(int i =0; i<n; i++){
           cout<<r[i]<<" ";
       }
        
       cout<<endl;
    */
        
     return m;
        
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
    int n = matrix.size();
   
    if(n==0) return 0;
    int m = matrix[0].size();
    vector<int> heights;
    for(int i =0; i<matrix[0].size(); i++){
        heights.push_back(matrix[0][i]-'0');
    }
    int maxarea =mah(heights);
    //for(int i =0; i<heights.size(); i++) cout<<heights[i]<<" ";
    //cout<<endl;
    for(int i =1; i<matrix.size(); i++){
        
        
        for(int j =0; j<matrix[i].size(); j++){
            
            if(matrix[i][j]=='0'){
                heights[j] =0;
            }
            
            else heights[j]++;
        }
        
       // for(int i =0; i<heights.size(); i++) cout<<heights[i]<<" ";
        int ans = mah(heights);
        
       // cout<<ans<<endl;
        maxarea = max(maxarea,ans);
        
    }
   
    return maxarea;
    }
};