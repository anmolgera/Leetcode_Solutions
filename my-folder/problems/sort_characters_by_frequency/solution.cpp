class Solution {
public:
    string frequencySort(string s) {
        
        map<char,int> mp;
        for(int i =0; i<s.length(); i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>> v;
        priority_queue<pair<int,char>> pq;
        for(auto i : mp){
            v.push_back({i.second,i.first});
            pq.push({i.second,i.first});
        }
        
        string res = "";
         while(!pq.empty()){
            auto x = pq.top();
            int y = x.first;
            for(int j =0; j<y; j++){
                
                res+=x.second;
            }
            pq.pop();
            
            
            
        }
        
        return res;
        
    }
};