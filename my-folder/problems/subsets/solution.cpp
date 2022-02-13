class Solution {
public:
    
    void func(int index, vector<int> &nums, vector<vector<int>> &ans, vector<int> s = {}  ){
        if(index == nums.size()) {
            auto a = s;
            ans.push_back(a);
            return;
        }
        
        func(index+1, nums, ans, s);
        s.push_back(nums[index]);
        func(index+1, nums, ans, s);
        
        
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        func(0,nums,ans);
        return ans;
    }
};