class Solution:
    def fourSumCount(self, A: List[int], B: List[int], C: List[int], D: List[int]) -> int:
        count = 0
        num_dict = {}
        for i in C:
            for j in D:
                s = i + j
                if s in num_dict:
                    num_dict[s] += 1
                else:
                    num_dict[s] = 1

        for i in range(len(A)):
            for j in range(len(B)):
                target = 0 - (A[i]+B[j])
                if target in num_dict:
                    count += num_dict[target]
        return count