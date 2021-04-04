class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
    vector<int> ans;
    map<int,set<int>> mp;
    for(int i =0; i<logs.size(); i++){
    
    mp[logs[i][0]].insert(logs[i][1]);
        
    }
        
    for(auto i : mp){
        ans.push_back(i.second.size());
    }
        
    unordered_map<int,int> m;
    for(auto i : ans){
        m[i]++;
    }
    vector<int> sol(k,0);
    for(int i =0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
        sol[ans[i]-1]++;
    }
        
    cout<<endl;
    return sol;
    
    }
};