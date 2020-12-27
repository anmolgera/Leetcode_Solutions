 class Solution {
public:
    int minJumps(vector<int>& arr) {
      unordered_map<int,vector<int>> mp;
      int n = arr.size();
      for(int i=0; i<arr.size(); i++){
          mp[arr[i]].push_back(i);
       }
       vector<bool> visited(n,false);
       visited[0] = true;
       queue<int> q;
       q.push(0);
       int steps =0;
        vector<int> next = {};
       while(!q.empty()){
           int s = q.size();
           while(s--){
               
               int i = q.front();
               //visited[i] = true;
               q.pop();
               if(i==n-1){
                   return steps;
                   break;
               }
                next = mp[arr[i]];
              
                next.push_back(i-1);
                next.push_back(i+1);
               
              
               for(int j =0; j<next.size(); j++){
                   if( next[j]>=0 && next[j]<=n-1 && visited[next[j]]==false){
                    q.push(next[j]);
                    visited[next[j]]=true;
                       //mp.erase(arr[next[j]]);
                   }
               }
               mp.erase(arr[i]);
               next = {};
               
             }
           steps++;
       }
      return 0;
    }
};