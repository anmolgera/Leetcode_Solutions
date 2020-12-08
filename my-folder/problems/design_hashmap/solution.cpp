class MyHashMap {
public:
    /** Initialize your data structure here. */
    vector<pair<int,int>> v;
    MyHashMap() {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        bool flag = false;
        for(int i =0; i<v.size();i++){
            if(v[i].first==key){
                flag = true;
                v[i].second=value;
                
            }
        }
        if(flag){
            return;
        }
        
        v.push_back({key,value});
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
         for(int i =0; i<v.size();i++){
            if(v[i].first==key){
                //flag = true;
               return v[i].second;
                
            }
        }
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
       bool flag = false;
       for(int i =0; i<v.size();i++){
            if(v[i].first==key){
                flag = true;
                //v[i].second++;
                v.erase(v.begin()+i);
                break;
                
            }
        }
        if(flag){
            return;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */