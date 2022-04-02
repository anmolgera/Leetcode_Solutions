class Solution {
    unordered_map<int,vector<int> > gr;
    vector<int> vis;
    vector<int> colo;
public:
    bool bfs(int u){
        colo[u]=1;
        queue<int> que;
        que.push(u);
        while(!que.empty()){
            int i=que.front();
            que.pop();
            for(auto v:gr[i]){
                if(colo[v]==-1){
                    colo[v]=1-colo[i];
                    que.push(v);
                }
                else if(colo[v]==colo[i]){
                    return false;
                }
            }
        }
        return true;
    }
    bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
        for(auto d:dislikes){
            gr[d[0]].push_back(d[1]);
            gr[d[1]].push_back(d[0]);
        }
        colo.resize(N+1,-1);
        for(int i=1;i<=N;i++){
            if(colo[i]==-1){
                if(!bfs(i)){
                    return false;
                }
            }
        }
        return true;
    }
};

