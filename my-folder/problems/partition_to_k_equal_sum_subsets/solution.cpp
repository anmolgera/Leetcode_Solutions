class Solution {
public:
    int seen [10002];
    
    
    bool cnpart(int start, int k , vector<int>& nums, int sum, int tar){
        
        if(start>nums.size()-1){
            return false;
        }
        if(k==1){
            return true;
        }
        
        if(sum==tar){
            return cnpart(0,k-1,nums,0,tar);
        }
        
        for(int i = start; i<nums.size(); i++){
            
            if(seen[i]==0){
                
                seen[i] =1;
                if(cnpart(i+1,k,nums,sum+nums[i],tar)) return true;
                seen[i] =0;
             }
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum =0;
        for(int i =0; i<10002; i++){
            seen[i] =0;
        }
        for(int i =0; i<nums.size(); i++){
            sum+=nums[i];
        }
        
        return k!=0 && sum%k==0 && cnpart(0,k,nums,0,sum/k);
    }
};