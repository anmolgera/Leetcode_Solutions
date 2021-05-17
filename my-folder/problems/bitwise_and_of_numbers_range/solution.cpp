class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        //return 0;
    if(right==0) return 0;
    int ans =0;
    while(left!=right){
        left>>=1;
        right>>=1;
        ans++;
    }
    
    return right<<ans;
        
    }
    
};