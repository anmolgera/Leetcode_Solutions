class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
    int s =0;
    unordered_set<int> st;
    int i =0;
    int j =0;
    int mx =0;
    while(j<nums.size()){
        
        if(st.find(nums[j])==st.end()){
            st.insert(nums[j]);
            s+=nums[j];
            j++;
            mx = max(mx,s);
        }
        
        else {
            
            s-=nums[i];
            st.erase(nums[i]);
            i++;
            
            
            
        }
        
        
    }
    return mx;
    }
};