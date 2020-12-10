class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
      
     stack<int> st;
     int n = nums.size();
     vector<int> res(n,-1);
        
      for(int i =2*n-1; i>=0; i-- ){
          
          int num = nums[i%n];
          while(!st.empty() && st.top()<=num){
              //res[i%n] = st.top();
              st.pop();
          }
          //st.pop();
          if(!st.empty())res[i%n] = st.top();
          st.push(num);
          
      }  
     return res;   
    }
};