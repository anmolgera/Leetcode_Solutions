class LRUCache {
public:
    int c;
    list<int> dl;
    unordered_map<int,pair<list <int> :: iterator, int >> mp;
    
    LRUCache(int capacity) {
        c = capacity;
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
    if(mp.find(key)!=mp.end()){
        mp[key].second = value;
        movetofirst(key);
    }  
        
     else {
         
      dl.push_front(key);
      mp[key] = {dl.begin(),value};
      movetofirst(key);
      c--;
      
      if(c<0){
      mp.erase(dl.back());
      dl.pop_back();
      c++;
          
      }
         
     } 
        
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */