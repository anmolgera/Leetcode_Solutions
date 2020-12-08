class FrontMiddleBackQueue {
public:
    vector<int> res;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        res.insert(res.begin(),val);
    }
    
    void pushMiddle(int val) {
        res.insert(res.begin()+res.size()/2,val);
    }
    
    void pushBack(int val) {
        res.push_back(val);
    }
    
    int popFront() {
        if(res.size()==0){
            return -1;
            
        }
        
        int val = res[0];
        res.erase(res.begin());
        return val;
    }
    
    int popMiddle() {
        if(res.size()==0){
            return -1;
            
        }
        
        int val = res[(res.size()-1)/2];
        res.erase(res.begin()+(res.size()-1)/2);
        return val;
    }
    
    int popBack() {
        if(res.size()==0){
            return -1;
            
        }
        
        int val = res[res.size()-1];
        res.pop_back();
        return val;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */