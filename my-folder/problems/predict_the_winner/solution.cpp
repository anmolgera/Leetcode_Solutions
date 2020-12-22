class Solution {
public:
    
    int check(vector<int> &nums, int s , int e, int turns){
        
        if(s==e){
            return turns*nums[s];
        }
        
        int a = turns*nums[s]+ check(nums,s+1,e,-turns);
        int b = turns*nums[e]+ check(nums,s,e-1,-turns);
        
        return turns*max(turns*a,turns*b);
        
        
    }
    
    
    
    
    bool PredictTheWinner(vector<int>& nums) {
        return check(nums,0,nums.size()-1, 1) >=0;
    }
};