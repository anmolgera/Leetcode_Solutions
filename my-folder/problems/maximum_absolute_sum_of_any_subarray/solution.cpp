class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
    int s =0;
    int mx =0;
    int mn =0;
    int s1 =0;
    for(int i =0; i<nums.size(); i++){
        s+=nums[i];
        s1+=nums[i];
        mx = max(mx,s);
        mn = min(mn,s1);
        if(s<0){
            s=0;
        }
        if(s1>0){
            s1 =0;
        }
    }
        
    return max(abs(mx),abs(mn));
        
    }
};