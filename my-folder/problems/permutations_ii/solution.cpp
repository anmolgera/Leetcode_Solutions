class Solution {
public:
    
    void backtrack(vector<vector<int>> &res, vector<int> &comb,vector<int> &used,int start, int k , vector<int>&nums){
        
        if(comb.size()==k){
            vector<int> a =comb;
            res.push_back(a);
            return;
        }
        
        for(int i = 0; i<nums.size(); i++){
            if(used[i]){
                continue;
            }
            if(i>0 && nums[i]==nums[i-1] &&!used[i-1]){
                continue;
            }
            
            comb.push_back(nums[i]);
            used[i] = true;
            backtrack(res,comb,used,0,k,nums);
            used[i] = false;
            comb.pop_back();
            
            
            
            
            
            
        }
        
        
        
        return;
        
        
        
        
        
        
    }
    
    
    
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> comb;
        int k = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> used (k,false);
        ///int k = comb.size();
        backtrack(res,comb,used,0,k,nums);
        return res;
    }
};