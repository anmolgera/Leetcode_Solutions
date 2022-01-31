class Solution {
public:
    
    struct BIT{
    vector<int> bit;
    int n;
    BIT(){
        n = 1e4 * 2 + 1;
        bit.assign(n, 0);
    }        
    void update(int idx, int val){
        while(idx < n){
            bit[idx]+=val;
            idx = idx | (idx+1);
        }
    }
	
    
    int query(int idx){
        int s = 0;
        while(idx >= 0){
            s += bit[idx];
            idx = (idx & (idx+1)) - 1;
        }
        return s;
    }
};

int getidx(int idx){
    return idx + 1e4;
}

    
    vector<int> countSmaller(vector<int>& nums) {
    vector<int> ans;
    ///reverse(nums.begin(),nums.end());
    vector<int> v;
    for(int i =0; i<nums.size(); i++){
        v.push_back(nums[i]);
    }
    
    BIT bit;
    for(int i =0; i<nums.size(); i++){
        bit.update(getidx(nums[i]),1);
    }
    //cout<<bit<<endl;    
    for(int i =0; i<nums.size(); i+=1){
        int x = bit.query(getidx(nums[i])-1);
        ans.push_back(x);
        bit.update(getidx(nums[i]),-1);
    }
        
    return ans;
    
    }
};