class Solution {
public:
    void backtrack(vector<vector<int>>&v, vector<int> &comb, int start, vector<int> &nums, int k){
        
        if(comb.size()==k){
            vector<int> a = comb;
            v.push_back(a);
            return;
        }
        
        
        for(int i = 0; i<k; i++){
            bool flag = false;
            for(int j =0; j<comb.size(); j++){
                if(comb[j]==nums[i]){
                    flag = true;
                    break;
                }
            }
            if(flag){
                continue;
            }
            comb.push_back(nums[i]);
            backtrack(v,comb,0,nums,k);
            comb.pop_back();
        }
        
        return;
    }
    
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> comb;
        int k = nums.size();
        backtrack(v,comb,0,nums,k);
        return v;
        
    }
};