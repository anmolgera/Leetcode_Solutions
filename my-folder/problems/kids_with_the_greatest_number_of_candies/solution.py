class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        mx = max(candies)
        rs =[]
        for i in range(len(candies)):
            if(candies[i]+extraCandies>=mx):
                rs+=[1]
            else:
                rs+=[0]
        return rs
        