class Solution {
     public static int findParent(int[] parent, int i) {
        int root = i;
        while(root!=parent[root]){
            root = parent[root];
        }
        return root;
    }
    public List<Integer> findSmallestSetOfVertices(int n, List<List<Integer>> edges) {
        int[] parent = new int[n];
        boolean[] visited = new boolean[n];
        for(int i = 0; i < n; i++) parent[i] = i;
        for(int i = 0; i < edges.size(); i++) {
            List<Integer> curr = edges.get(i);
            int sv = curr.get(0);
            int ev = curr.get(1);
            if(visited[ev]) continue;
            int p1 = findParent(parent, sv);
            int p2 = findParent(parent, ev);
            parent[p2] = p1; 
            visited[ev] = true;
        }
        List<Integer> ans = new ArrayList<>();
        for(int i = 0; i < n; i++) if(parent[i] == i) ans.add(i);
        return ans;
}
};