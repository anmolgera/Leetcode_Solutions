class MyCalendar {
public:
    
    map<int,int> mp;
    
    MyCalendar() {
        
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
        
        if(k > 1) {
            mp[start]--;
            mp[end]++;
            return false;
        }
        
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */