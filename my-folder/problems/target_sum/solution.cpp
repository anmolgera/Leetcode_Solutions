class Solution {
public:
    
    
   
    void recur(vector<int>& nums, int target, int i, int s, int &cnt){
        
        if(i==nums.size()){
            if(s==target){
                cnt++;
            }
        }
        
        else {
            
            recur(nums,target, i+1, s-nums[i],cnt);
            recur(nums,target, i+1, s+nums[i],cnt);
            
        }
        
        
        
        
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
    int cnt =0;
    recur(nums,target,0, 0, cnt);
    return cnt;
    }
};