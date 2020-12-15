class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int count =0;
        int n = nums.size();
        auto it = nums.begin() + n/2;
        
        nth_element(nums.begin(),it,nums.end());
        int median = *it;
        for(int i =0; i<n; i++){
            count+=(abs(nums[i]-median));
        }
        return count;
    }
};