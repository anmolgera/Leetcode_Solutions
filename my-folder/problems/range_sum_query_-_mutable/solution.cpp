class NumArray {
public:
    
    vector<int> tree; 
    vector<int> arr;     
    void buildtree(vector<int>&nums, vector<int>&temp, int start, int end, int tn){
        
        if(start==end){
            temp[tn] = nums[start];
            return;
        }
        
        int mid =  (start+end)/2;
        buildtree(nums,temp,start,mid,2*tn);
        buildtree(nums,temp,mid+1,end,2*tn+1);
        temp[tn] = temp[2*tn] + temp[2*tn+1];
        
        
    }
    
    void update(vector<int>&arr, vector<int>&tree, int start, int end, int tn, int index, int val){
        
    if(start==end){
        
        arr[index] = val;
        tree[tn] = arr[index];
        return;
    }    
        
    int mid = (start+end)/2;
    if(index>mid){
        update(arr,tree,mid+1,end,2*tn+1,index,val);
    }
        
    else {
        
        update(arr,tree,start,mid,2*tn,index,val);
    }
        
     tree[tn] = tree[2*tn] + tree[2*tn+1];   
        
    }
      
    int sumRange(vector<int>&tree, int start, int end, int tn, int left, int right){
        
     if(right<start || left>end) return 0;    // No overlap
     if(left<=start && right>=end) return tree[tn]; // completly Overlap
     else {
                                   
         int mid = (start+end)/2;    // Condition of partial Overlap
         return sumRange(tree,start,mid,2*tn,left,right) + sumRange(tree,mid+1,end,2*tn+1,left,right);
     }
        
    }
    
    NumArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> temp(4*n,0);
    arr = nums;
        //tree = temp;
    buildtree(nums,temp,0,n-1,1);
    tree = temp;
    }
    
    void update(int index, int val) {
    update(arr,tree,0,arr.size()-1,1,index,val);   
    }
    
    int sumRange(int left, int right) {
        return sumRange(tree,0,arr.size()-1,1,left,right);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */