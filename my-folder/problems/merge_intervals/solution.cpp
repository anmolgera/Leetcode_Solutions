class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    if(intervals.size()==0) return {};
    vector<vector<int>> v;
    sort(intervals.begin(),intervals.end());
    v.push_back({intervals[0][0],intervals[0][1]});
    for(int i =1; i<intervals.size(); i++){
        
        if(v.back()[1]>=intervals[i][0]){
            v.back()[1] = max( v.back()[1] , intervals[i][1] );
        }
        
        else {
            v.push_back({intervals[i][0],intervals[i][1]});
        }
        
    }
    
    return v;
    }
};