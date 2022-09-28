class MyCalendarTwo {
public:
    
    map<int,int> mp;
    
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        mp[start]++;
        mp[end]--;
        int curr = 0;
        int k = 0;
        
        for(auto t : mp){
        curr += t.second;
        k = max(k,  curr);    
        }
        
        if(k > 2) {
            mp[start]--;
            mp[end]++;
            return false;
        }
        
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */