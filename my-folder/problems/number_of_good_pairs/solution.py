class Solution:
    def numIdenticalPairs(self, nums):
        cnt =0;
        for i in range(0,len(nums)):
            for j in range(i+1,len(nums)):
                cnt+=(nums[i]==nums[j])
        return cnt;          
        