class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        count = 0
        lo = 0
        dict_seen = {0 : -1}
        for i in range(len(nums)):
            if nums[i]==0 : count -=1
            else: count += 1
            if count in dict_seen:
                lo = max(lo, i - dict_seen[count])
            else: dict_seen[count] = i
        return lo