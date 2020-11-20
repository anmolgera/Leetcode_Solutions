class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1){
            return 0; 
        }
        
        int ans =0;
        int count =0;
        int pro =1;
        int left =0;
        for(int i =0; i<nums.size(); i++){
            pro*=nums[i];
            while(pro>=k) pro/=nums[left++];
            ans+=(i-left+1);
            
        }
        
        return ans;
        
        
        
    }
};