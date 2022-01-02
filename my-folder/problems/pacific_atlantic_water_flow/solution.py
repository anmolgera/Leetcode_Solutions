class Solution:
    
    def dfs(self, A, i, j, visited, m, n):
        visited[i][j] = True
        for directions in self.directions:
            x, y = i + directions[0], j + directions[1]
            if x < 0 or y < 0 or x >= m or y >= n or visited[x][y] or A[i][j] > A[x][y]:
                continue
            self.dfs(A,x,y,visited,m,n)
    
    
    def pacificAtlantic(self, A: List[List[int]]) -> List[List[int]]:
        if A == None :
            return []
        m = len(A)
        n = len(A[0])
        self.directions = [(0,-1),(1,0),(-1,0),(0,1)]
        p_array = [[False for i in range(n)] for j in range (m)]
        a_array = [[False for i in range(n)] for j in range (m)]
        result = []
        for i in range (m):
            self.dfs(A,i,0,p_array,m,n)
            self.dfs(A,i,n-1,a_array,m,n)
        for i in range (n):
            self.dfs(A,0,i,p_array,m,n)
            self.dfs(A,m-1,i,a_array,m,n)
        for i in range (m):
            for j in range (n):
                if p_array[i][j] and a_array[i][j]:
                    result.append([i,j])
        return result
    
    
        