class Solution {
public:
    unordered_map<int,vector<int>> mp;
    int minJumps(vector<int>& arr) {
    mp.clear();
    for(int i =0; i<arr.size(); i++){
        mp[arr[i]].push_back(i);
    }
    queue<int> q;
    q.push(0);
    int n = arr.size();
    vector<int> vis(n,0);
    for(int i =0; i<n; i++){
        vis[i] =-1;
    }
        
    vis[0] =1;
    int level =0;
    while(!q.empty()){
    
    int s = q.size();
    while(s--){
    auto p = q.front();
    q.pop();
    if(p==n-1) return level;

    if(p+1<n && vis[p+1]==-1){
        q.push(p+1);
         vis[p+1] =1;
    }
        
    if(p-1>=0 && vis[p-1]==-1){
        q.push(p-1);
         vis[p-1] =1;
    }
    auto v = mp[arr[p]];       
    for(int i =0; i<v.size(); i++){
    if(vis[v[i]]==-1){
        q.push(v[i]);
        vis[v[i]] =1;
    }    
    }    
    mp.erase(arr[p]);    
    }
    level++;
    }

    return level;
    }
};