class Solution {
public:
    
    int findparent(vector<int>&parent, int root){
        
        while(root!=parent[root]){
            root = parent[root];
        }
        
        return root;
    }
    
    int un(vector<int>&parent,int x,int y){
        int p1 = findparent(parent,x);
        int p2 = findparent(parent,y);
        if(p1==p2){
            return -1;
        }
        parent[p1] = p2;
        return 0;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int> parent(n+1,0);
        for(int i =1; i<=n; i++){
            parent[i] =i;
        }
        
         for(int i =0; i<edges.size(); i++){
             
             
             int x = un(parent,edges[i][0],edges[i][1]);
             vector<int> v = edges[i];
             if(x==-1) return v;
            
        }
        
       return {}; 
    }
};