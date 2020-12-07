class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        
        
        int vec[2]={0};
        int ans =0;
        int count =0;
        
           for(int j =0; j<32; j++){
            
            
            for(int i =0; i<nums.size(); i++){
                
                
                //count++;
                vec[nums[i]%2]++;
                nums[i] = nums[i]>>1;
            }
            
            ans+=vec[0]*vec[1];
            vec[0] =0;
            vec[1] =0;
           
            
           }    
           
        
        
        return ans;
        
        
    }
};