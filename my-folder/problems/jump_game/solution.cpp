class Solution {
public:
    
  
    
    bool canJump(vector<int>& nums) {
    // Let us define an index if we can reach the last position from that particular index
    vector<int> a(nums.size(),-1);
    int n = nums.size();
    a[n-1]  =1;   
    for(int i = n-2; i>=0; i--){
    int farthest = min(i+nums[i],n-1);
    for(int j = i+1; j<=farthest; j++){
        if(a[j]==1){
            a[i] =1;
            
        }
    }   
        
    }
        
    
    return a[0]==1;
    }
};