class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     
    int n = nums.size();
    int l =0;
    int r =n-1;
    vector<int> ans(n,0);
    
    for(int k = n-1; k>=0; k--){
        
        if(abs(nums[r])>abs(nums[l])){
            ans[k] = nums[r]*nums[r];
            r--;
        }
        else {
            ans[k] = nums[l]*nums[l];
            l++;
        }
        
    }
    return ans;
    
    }
};