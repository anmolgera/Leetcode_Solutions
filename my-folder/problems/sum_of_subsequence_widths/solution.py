class Solution:
    def sumSubseqWidths(self, A: List[int]) -> int:
        sum = 0
        mod = 1000000007
        for i, a in enumerate(sorted(A)):
            print(str(str(i) + "," + str(a)))
            sum += (((1 << i) - (1 << len(A) - i - 1))*a)
        return sum%mod
        