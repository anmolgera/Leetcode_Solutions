class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int count =0;
        int mn = INT_MAX;
        for(int i =0; i<nums.size(); i++){
            mn = min(mn,nums[i]);
        }
        
        for(auto i : nums){
            count+=(i-mn);
        }
        
        return count;
    }
};