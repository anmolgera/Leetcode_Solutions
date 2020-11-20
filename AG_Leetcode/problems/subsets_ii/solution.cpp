class Solution {
public:
    
    void dfs(vector<vector<int>>&v, vector<int> sub, vector<int>&nums, int idx){
        
        
        v.push_back(sub);
        for(int i = idx; i<nums.size(); i++){
            
            if(i> idx && nums[i]==nums[i-1]){
                
                continue;
            }
            sub.push_back(nums[i]);
            dfs(v,sub,nums,i+1);
            sub.pop_back();
            
            
            
        }
        
        
        return;
        
        
        
        
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> v;
        vector<int> sub;
        sort(nums.begin(),nums.end());
        dfs(v,sub,nums,0);
        return v;
        
        
    }
};