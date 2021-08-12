class LRUCache {
public:
    
    int cap ;
    
    list<int> dl;
    
    unordered_map<int,pair<list<int> :: iterator, int>> mp;
    
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    
    void movetofirst(int key){
        
    dl.erase(mp[key].first);
    dl.push_front(key);
    mp[key].first = dl.begin();
        
    }
    
    
    int get(int key) {
    if(mp.find(key)==mp.end()) return -1;
    movetofirst(key);
    return mp[key].second;
    }
    
    void put(int key, int value) {
     
    if(mp.find(key)==mp.end()){
    dl.push_front(key);
    mp[key] = {dl.begin(),value};
    //movetofirst(key);
    cap--;
    if(cap<0){
        mp.erase(dl.back());
        cap++;
        dl.pop_back();
    }
   
    
    
    }
        
    else {
    mp[key].second = value;
    movetofirst(key);
    
        
    }
    
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */