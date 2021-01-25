class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
       map<int,int> mpfreq, mpidx;
       
       int res =INT_MAX;
       int deg =0;
        
       for(int i =0; i<nums.size(); i++){
           
           if(mpidx.find(nums[i])==mpidx.end()){
               mpidx[nums[i]] =i;
           }
           
           mpfreq[nums[i]]++;
           if(mpfreq[nums[i]]>deg){
               
               deg = mpfreq[nums[i]];
               res = i-mpidx[nums[i]]+1;
           }
           
           else if(mpfreq[nums[i]]==deg){
               
                res = min(res,i-mpidx[nums[i]]+1);
               
               
               
           }
           
           
           
           
       }
        return res;
    }
};