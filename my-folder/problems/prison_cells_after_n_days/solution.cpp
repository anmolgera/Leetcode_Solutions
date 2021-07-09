class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
    int sz = 8;
    vector<int> temp(sz);
    vector<vector<int>> res;
    while(n--){
        
    for(int i =1; i<sz-1; i++){
        
        if(cells[i-1]==cells[i+1]){
            temp[i] = 1;
        }
        else {
            temp[i] =0;
        }
    }
        
    if(res.size() && res.front()==temp) return res[n%res.size()];
    else {
        res.push_back(temp);
    }
    cells = temp;    
    }
    return cells;    
    }
};