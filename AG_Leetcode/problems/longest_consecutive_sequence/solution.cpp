class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
       set<int> s(nums.begin(),nums.end());
        
        if(s.size()==0)
            
            return 0;
        
       int ans =1;
        for(int i =0; i<nums.size(); i++){
            
            
            if(s.find(nums[i])==s.end()){
                
                continue;
            }
            
            s.erase(nums[i]);
            int prev = nums[i]-1;
            int next = nums[i]+1;
            
            
            while(s.find(prev)!=s.end()){
                
               s.erase( prev--);
                
                
                
            }
            
            
               
            while(s.find(next)!=s.end()){
                
                s.erase(next++);
                
                
                
            }
            
            
            
           ans = max(ans,next-prev-1); 
            
            
            
        }
        
        return ans;
            
    }
};