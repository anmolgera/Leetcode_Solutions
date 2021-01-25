class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans =0;
        double res =INT_MIN;
        for(int i =0; i<k; i++){
            ans+=nums[i];
            
        }
        res = max(res,ans/k);
        for(int i =k; i<nums.size(); i++){
            
            ans+=nums[i];
            ans-=nums[i-k];
            
            res = max(res,ans/k);
            
        }
        
        return res;
    }
};