class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
     
    int sum =0;
    int ans =0;
    unordered_set<int> st = {0};
    for(int i =0; i<nums.size(); i++){
        
        sum+=nums[i];
        
        if(st.find(sum-target)!=st.end()){
            ans++;
            sum =0;
            st ={0};
        }
        else {
            st.insert(sum);
        }
    }
        
     
        return ans;
    }
};