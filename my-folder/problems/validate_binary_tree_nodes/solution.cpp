class Solution {
public:
       bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        //dfs count nodes.
        //first build indegree by leftchild or rightchild
        vector<int> indegree(n, 0);
        
        for (int i = 0; i < n; i++) {
            if (leftChild[i] != -1 && indegree[leftChild[i]]++ == 1)
                return false;
            
            if (rightChild[i] != -1 && indegree[rightChild[i]]++ == 1)
                return false;
        }
        
        int root = -1;
        
        for (int i = 0; i < n; i++) {
            if (indegree[i] == 0)
                root = i;
        }
        
        if (root == -1)
            return false;
        
        return dfs(leftChild, rightChild, root) == n;
    }
    
    int dfs(vector<int> &left, vector<int> &right, int root) {
        if (root == -1)
            return 0;
        
        return 1 + dfs(left, right, left[root]) + dfs(left, right, right[root]);
    }
     
};