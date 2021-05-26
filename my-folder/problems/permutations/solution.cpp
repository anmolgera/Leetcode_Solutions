class Solution {
public:
    
    void func(vector<vector<int>>&ans, vector<int>nums,vector<int>&res, int i, int n){
        
    if(res.size()==n){
        vector<int> ne = res;
        ans.push_back(res);
        return ;
    }
        
    for(int i =0; i<n; i++){
        bool flag =false;
        for(int j =0; j<res.size(); j++){
            if(res[j]==nums[i]){
                flag = true;
                break;
            }
        }
        
        if(flag) continue;
        res.push_back(nums[i]);
        func(ans,nums,res,0,n);
        res.pop_back();
    }
        
    return;   
        
    }
    
    
    
    
    
    vector<vector<int>> permute(vector<int>& nums) {
     int n = nums.size();
     vector<vector<int>>ans;
     vector<int> res;
     func(ans,nums,res,0,n);
    return ans;
    }
};