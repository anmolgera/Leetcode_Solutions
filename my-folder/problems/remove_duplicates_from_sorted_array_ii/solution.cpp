class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i =2;
        if(n<3){
            return n;
        }
        
        for(int j =i; j<n; j++){
            if(nums[i-2]!=nums[j]){
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};