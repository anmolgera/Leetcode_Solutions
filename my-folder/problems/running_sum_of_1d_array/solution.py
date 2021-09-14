class Solution:
    def runningSum(self, nums):
        print(len(nums))
        for i in range(1,len(nums)):
            print(i)
            nums[i] +=nums[i-1];
        return nums;
        