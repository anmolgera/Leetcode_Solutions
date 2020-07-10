class NumArray {
public:
    
    vector<int> memo ={0};
    NumArray(vector<int>& nums) {
      
        int sum =0;
        for(int i =0; i<nums.size(); i++){
            
            sum+=nums[i];
            memo.push_back(sum);
            
        }
    }
    
    int sumRange(int i, int j) {
        
        return memo[j+1] - memo[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */