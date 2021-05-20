class Solution {
public:
    
    int uf(vector<int>&parent, int root){
        
        while(root!=parent[root]){
            root = parent[root];
        }
        return root;
    }
    
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
     unordered_map<string,int> mp;
     int n = accounts.size();
     vector<int> parent(n,0);
     for(int i =0; i<n; i++)  parent[i] =i;
     for(int i =0; i<accounts.size(); i++){
        
         for(int j =1; j<accounts[i].size(); j++){
             if(mp.find(accounts[i][j])!=mp.end()){
                 int x = uf(parent,i);
                 int y = uf(parent,mp[accounts[i][j]]);
                 parent[x] =y;
             }
             
             else {
                 mp[accounts[i][j]] =parent[i];
             }
         }
     }
     unordered_map<int,vector<string>> m;  
     for(auto i : mp){
     int idx = uf(parent,i.second); //  it not i.second, its uf(parent,i.second) why?
     m[idx].push_back(i.first);    
        
     }  
     vector<vector<string>> v;   
     for(auto i: m) {
         auto  j = i.second;
         sort(j.begin(),j.end());
         j.insert(j.begin(),accounts[i.first][0]);
         v.push_back(j);
     } 
    return v;
    }
};