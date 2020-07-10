class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        if(nums.size()==0){
            
            return 0;
        }
        
        int size =  nums.size();
        
        
     vector<int> len (size,1);
        
        for(int i =1; i<nums.size(); i++){
            
            for(int j =0; j<i; j++){
                
                if(nums[i]>nums[j])
                len[i] = max(len[i],len[j]+1);
                
                
                
            }
            
            
            
        }
        
        int res = 1;
        for(int i =0; i<nums.size(); i++){
            
            res = max(res,len[i]);
            
            
        }
        
        return res;
        
        
    }
};