
class Solution {
public:
    
    
    
    vector<int> peopleIndexes(vector<vector<string>>& f) {
    unordered_map<int,unordered_set<string>> mp;
    for(int i =0; i<f.size(); i++){
        for(int j =0; j<f[i].size(); j++){
            mp[i].insert(f[i][j]);
        }
    }
    
    vector<int> ans;
    for(auto i : mp){
        cout<<i.first<<":";
        for(auto j : i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i =0; i<f.size(); i++){
        bool flag = false;
        for(int j =0; j<f.size(); j++){
            if(i==j) continue;
            bool ch = true;
            for(int k =0; k<f[i].size(); k++){
                if(mp[j].find(f[i][k])==mp[j].end()){
                    ch = false;
                    break;
                }
            }
            
            if(ch){
                flag = true;
                break;
            }
           
        }
        if(!flag){
            ans.push_back(i);
        }
    }
    return ans;
        
    }
};