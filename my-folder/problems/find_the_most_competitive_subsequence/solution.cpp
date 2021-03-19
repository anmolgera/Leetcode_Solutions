class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
     
    stack<int> st;
    for(int i =0; i<nums.size(); i++){
        
        while(st.size() && nums[i]<st.top() && st.size()-1+nums.size()-i>=k){
            st.pop();
        }
    
    if(st.size()<k) st.push(nums[i]);
        
    }
    vector<int> res;
    while(!st.empty()){
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
    }
};