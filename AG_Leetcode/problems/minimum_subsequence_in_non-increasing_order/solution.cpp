class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        
        vector<int> res;
        
        int sum =0;
        int halfsum =0;
        
        
        for(int i =0; i<nums.size(); i++){
            
            halfsum +=nums[i];
            
            
        }
        
        
        halfsum = halfsum/2;
        
        priority_queue<int> pq (nums.begin(),nums.end());
        
        
        while(sum<=halfsum){
            
            
            int x = pq.top();
            res.push_back(x);
            sum+=x;
            pq.pop();
            
            
        }
        
      //  reverse(res.begin(),res.end());
        return res;
        
        
        
        
        
        
    }
};