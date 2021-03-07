class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
       unordered_map<int, unordered_set<int>> mp;
        int res = INT_MAX;
        
        for(const auto& point : points)
            mp[point[0]].insert(point[1]);
        
        for(int i=0; i<points.size()-1; i++)
        {
            for(int j=i+1; j<points.size(); j++)
            {
                if(points[i][0] == points[j][0] || points[i][1] == points[j][1])
                    continue;
                if(mp[points[i][0]].count(points[j][1]) && mp[points[j][0]].count(points[i][1]))
                    res = min(res, abs(points[i][0] - points[j][0]) * abs(points[i][1] - points[j][1]));
            }
        }
        if(res == INT_MAX)
            return 0;
        return res;  
    }
};