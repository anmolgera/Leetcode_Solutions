class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
    unordered_set<int> st;
    queue<int> q;
    q.push(0);
    while(!q.empty()){
    
    auto i = q.front();
    q.pop();
    st.insert(i);
    for(int j =0; j<rooms[i].size(); j++){
        int k = rooms[i][j];
        if(st.find(k)==st.end()) q.push(k);
    }
        
    }
    
    return st.size()==rooms.size();
        
    }
};