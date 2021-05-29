class Solution {
public:
    int jump(vector<int>& nums) {
    
    int n = nums.size()-1;
    int pos = n;
    int ans =0;
    while(pos!=0){
        
        for(int i =0; i<n; i++){
            if(nums[i]+i>=pos){
                ans++;
                pos =i;
                break;
            }
        }
    }
    return ans;
    }
};