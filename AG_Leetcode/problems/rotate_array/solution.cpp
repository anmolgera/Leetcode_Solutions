class Solution {
public:
    
  /*  void rotatebyone(vector<int>& nums){
        
        int x = nums[nums.size()-1];
        
        for(int i =nums.size()-1; i>=1; i--){
            
            nums[i] = nums[i-1];
            
            
            
        }
        
       nums[0] = x; 
        
        
        
        
    }
    
 */   
    
    void rotate(vector<int>& nums, int k) {
        
         k %=nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        
    }
};