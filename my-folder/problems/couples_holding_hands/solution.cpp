class UF
{
public:
    UF (int n) :
        parent(n)
    {}
    
    void setParent(int x, int p)
    {
        parent[x] = p;
    }
    
    int find(int x)
    {
        if (x != parent[x])
            parent[x] = find(parent[x]);
        
        return parent[x];
    }
    
    bool union_find(int x, int y)
    {
        int px = find(x);
        int py = find(y);
        
        if (px == py)
            return false;
        
        parent[px] = py;
        return true;
    }

private:
    vector<int> parent;
};
    class Solution {
public:

    int minSwapsCouples(vector<int>& row) {
      if(row.size()==0){
          return 0;
      }
      UF uf(row.size());
      for(int i =0; i<row.size(); i+=2){
          
          uf.setParent(row[i],row[i]);
          uf.setParent(row[i+1],row[i]);
          
      }
        
      int cnt =0;
      for(int i =0; i<row.size(); i+=2){
          
          if(uf.union_find(i,i+1)){
              cnt++;
          }
      }
        
        
     return cnt;   
        
        
    }
};