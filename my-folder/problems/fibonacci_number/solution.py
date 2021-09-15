class Solution:
    def fib(self, n: int) -> int:
        res =[];
        res +=[0]
        res +=[1]
      
        for i in range(2,n+1):
            res.append(res[i-1]+res[i-2])
        print(len(res))
        return res[n]
            
       
        
        