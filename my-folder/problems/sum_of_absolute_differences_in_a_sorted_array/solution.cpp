class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        
       vector<int> prefix ( nums.size(),0);
       int n = nums.size();
       int sum =0;
       for(int i =1; i<n; i++){
           sum+=(nums[i]-nums[0]);
       }
        prefix[0] = sum;
        
        for(int i =1; i<n; i++){
            
            sum += i*(nums[i]-nums[i-1]) -(n-i)*(nums[i]-nums[i-1]);
            prefix[i] = sum;
            
        }
        
        
        return prefix;
        
        
    }
};