class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st; 
    vector<int> v;
    for(int i = nums2.size()-1; i>=0; i--){
        
     int val = nums2[i];
     while(st.size() && val>st.top()){
         st.pop();
     }
    
    if(st.empty()){
        v.push_back(-1);
    }
        
    else v.push_back(st.top());
    st.push(val);
    
    
    }
        
    reverse(v.begin(),v.end());
    map<int,int> mp;
   for(int i =0; i<nums2.size(); i++){
       mp[nums2[i]] = v[i];
   }
        
   vector<int> ans;
        
   for(int i =0; i<nums1.size(); i++){
       ans.push_back(mp[nums1[i]]);
   }
    return ans;
    }
};