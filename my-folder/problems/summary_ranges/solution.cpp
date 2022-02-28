class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    vector<string> ret;
        int s = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i + 1 == nums.size() || nums[i] + 1 != nums[i+1]){
                string tmp = to_string(nums[s]);
                if(i != s) tmp += "->" + to_string(nums[i]);
                ret.push_back(tmp);
                s = i + 1;
            }
        }
        
        return ret;    
    }
};