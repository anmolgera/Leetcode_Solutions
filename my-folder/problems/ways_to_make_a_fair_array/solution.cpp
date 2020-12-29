class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
       int left[2] = {};
       int rig[2] ={};
        
        
        
        
        for(int i =0; i<nums.size(); i++){
           rig[i%2]+=nums[i]; 
            
        }
        
        int res =0;
        for(int i =0; i<nums.size(); i++){
            rig[i%2]-=nums[i];
            if(left[0]+rig[1]==left[1]+rig[0]){
                res++;
            }
            
            left[i%2]+=nums[i];
        }
        return res;
    }
};