class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        priority_queue<pair<int,int>> pq;
        
        
        for(int i =0; i<points.size(); i++){
            
            int d = abs(points[i][0])*(abs(points[i][0])) + abs(points[i][1])*abs(points[i][1]);
            float d1 = sqrt(d);
            pq.push({d,i});
            if(pq.size()>k){
                pq.pop();
            }
            
            
            
        }
        
       int sum =0;
        vector<vector<int>> v;
        while(!pq.empty()){
            auto val = pq.top();
            int x = val.second;
            v.push_back({points[x][0],points[x][1]});
            pq.pop();
            
        }
        return v;
        
    }
};