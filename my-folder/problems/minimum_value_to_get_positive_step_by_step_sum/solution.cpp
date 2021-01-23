class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int> v;
        v.push_back(0);
        for(int i =0; i<nums.size(); i++){
            v.push_back(v[i]+nums[i]);
        }
        
        int mn = INT_MAX;
        for(int i =0; i<v.size(); i++){
            if(mn>v[i]){
                mn = v[i];
            }
        }
        return mn < 1 ? abs(mn) + 1 : 0;
    }
};