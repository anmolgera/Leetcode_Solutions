class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       
        vector<int> vt;
        deque<int> dq;
        
        for(int i =0; i<nums.size(); i++){
            
            while(!dq.empty() && dq.back()<nums[i]){
                dq.pop_back();
            }
            
            dq.push_back(nums[i]);
            
            if(i>=k-1){
                vt.push_back(dq.front());
                //dq.pop_front();
                if(nums[i-k+1]==dq.front()) dq.pop_front();
            }
            
            
        }
        return vt;
    }
};