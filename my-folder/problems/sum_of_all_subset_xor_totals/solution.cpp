class Solution {
public:
    
    int dfs(vector<int>&nums, int idx, int sum, int res){
        
        if(idx>=nums.size()) {
            
            res+=sum;
            return res;
        }
        
        int x = dfs(nums,idx+1,sum^nums[idx],res);
        int y = dfs(nums,idx+1,sum,res);
                
        return x+y; 
        
    }
    
    
    int subsetXORSum(vector<int>& nums) {
    //int result =0;
    int x = dfs(nums,0,0,0);
    return x;
    }
};