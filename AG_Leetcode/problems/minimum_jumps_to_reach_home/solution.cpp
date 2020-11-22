class Solution {
public:
    /*  int solve(unordered_set<int> &forbidden, int index, int a, int b, int x, int isBackJumpAllowed){
        if(index == x) {
            return 1;
        }
        int res1  = MAX;
        int move1 = index + a;
        if(forbidden.find(move1) == forbidden.end() && move1 >= 0 && visited.count(move1)==0 && move1 <= 4000){
            visited.insert(move1);
            res1  = solve(forbidden, move1, a, b, x, 1);
        }
        int res2  = MAX;
        int move2 = index - b;
        if(forbidden.find(move2) == forbidden.end() && move2 >= 0 && isBackJumpAllowed && visited.count(move2)==0){
            res2  = solve(forbidden, move2, a, b, x , 0);
        }
        return 1 + min(res1, res2);
    }
    
    */
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        int lim = 2001+a+b;
        queue<pair<int,int>>q;
        q.push({0,1});
        bool visited[lim+1];
        memset(visited,false,sizeof visited);
        visited[0] = true;
        
        for(int i:forbidden)
            visited[i] = true;
        int ans=0;
        while(!q.empty())
        {
            int t = q.size();
            while(t--)
            {
                pair<int,int> curr = q.front();
                visited[curr.first] = true;
                q.pop();
                
                if(curr.first==x) return ans;
                int f = curr.first+a;
                int ba = curr.first-b;
                if(f<=lim && visited[f]==false)
                {
                    q.push({f,0});
                    visited[f]=true;
                }
                if(curr.second==0)
                { 
                    if(ba>=0 && visited[ba]==false)
                        q.push({ba,1});
                }
            }
            ans++;
        }
        return -1;
    }
};