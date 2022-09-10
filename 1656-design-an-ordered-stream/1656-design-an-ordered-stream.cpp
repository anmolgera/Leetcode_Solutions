class OrderedStream {
public:
    priority_queue<pair<int,string>, vector<pair<int,string>>, greater<pair<int,string>>> pq;
    int cnt = 1;
    int total_cnt = 1;
    OrderedStream(int n) {
       total_cnt = n; 
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string> ans;
        pq.push({idKey, value});
        while(!pq.empty() && pq.top().first == cnt){
            ans.push_back(pq.top().second);
            pq.pop();
            cnt += 1;
        }
        return ans;
    }
};
/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */