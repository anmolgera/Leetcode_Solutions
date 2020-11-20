class Solution {
public:
    
    void dfs(vector<vector<int>> &v, vector<int> & nums, vector<int>  sub, int idx){
        
        
        v.push_back(sub);
        for(int i =idx; i<nums.size(); i++){
            
            sub.push_back(nums[i]);
            dfs(v,nums,sub,i+1);
            sub.pop_back();
            
            
            
            
            
            
        }
        
        return;
        
        
    }
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> v;
        vector<int> sub;
         
        dfs(v,nums,sub,0);
        return v;
        
        
        
        
        
    }
};