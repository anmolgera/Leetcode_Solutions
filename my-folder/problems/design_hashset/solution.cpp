class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        
    }
    vector<int> res;
    void add(int key) {
        bool flag = false;
        for(int i =0; i<res.size(); i++){
            if(res[i]==key){
                flag = true;
            }
            
        }
        
        if(flag){
            return;
        }
        
        res.push_back(key);
    }
    
    void remove(int key) {
        // bool flag = false;
        for(int i =0; i<res.size(); i++){
            if(res[i]==key){
                //flag = true;
                res.erase(res.begin()+i);
                break;
            }
            
        }
        
       return;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        bool flag = false;
        for(int i =0; i<res.size(); i++){
            if(res[i]==key){
                flag = true;
            }
            
        }
        
        if(flag){
            return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */