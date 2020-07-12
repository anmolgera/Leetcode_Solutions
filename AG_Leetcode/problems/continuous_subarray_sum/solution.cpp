class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        if(nums.size() < 2) return false;
        if(k == 0)
        {
            for(int i = 1; i < nums.size(); i++)
            {
                if(nums[i] == 0 && nums[i - 1] == 0) return true;
            }
            return false;
        }else{
            int i = 0;
            unordered_map<int, int> res;
            while(true)
            {
                if(i != 0 && nums[i] % k == 0)
                {
                    return true;
                }else{
                    if(res.find(nums[i] % k) == res.end())
                    { 
                         res[nums[i] % k] = i;
                    }else{
                         if(i - res[nums[i] % k] > 1) return true;
                    }
                }
                i++;
                if(i == nums.size()) return false;
                nums[i] += nums[i - 1];
            }
        }
    }
};