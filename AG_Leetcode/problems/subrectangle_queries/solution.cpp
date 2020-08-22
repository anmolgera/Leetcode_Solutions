class SubrectangleQueries {
public:
    
    vector<vector<int>> res,subs;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        
        
        res = rectangle;
        
        
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        
        
       subs.push_back({row1,col1,row2,col2,newValue});
        
        
    }
    
    int getValue(int row, int col) {
        
        
        for(int i =subs.size()-1; i>=0; i--){
            
            if(subs[i][0] <=row && subs[i][1] <=col && subs[i][2] >=row && subs[i][3] >=col)
                    return subs[i][4];
        }
    
      return  res[row][col];
    
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */