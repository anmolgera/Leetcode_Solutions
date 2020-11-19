class Solution {
public:
     vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subs;
        vector<int> sub;
        subsets(nums, 0, sub, subs);
        for(int i =0; i<subs.size(); i++){
            
            for(int j =0; j<subs[0].size(); j++){
                
                cout<<subs[i][j]<<" ";
            }
        }
        return subs;
    }
private:
    void subsets(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& subs) {
        subs.push_back(sub);
        for (int j = i; j < nums.size(); j++) {
            sub.push_back(nums[j]);
            subsets(nums, j + 1, sub, subs);
            sub.pop_back();
        }
        return;
    }
};