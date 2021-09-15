class Solution:
    def countBits(self, n: int) -> List[int]:
        ans =[0]
        for i in range(1,n+1):
            ans += [ans[int(i/2)] + (i&1)]
        return ans
        