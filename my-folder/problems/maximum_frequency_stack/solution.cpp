class FreqStack {
public:
    
    unordered_map<int, int> mp;
    unordered_map<int,stack<int>> fq;
    int mxfreq =0;
    FreqStack() {
        
    }
    
    void push(int val) {
        mp[val]++;
        if(mxfreq<mp[val]){
            mxfreq = mp[val];
            
        }
        fq[mp[val]].push(val);
    }
    
    int pop() {
    
       int x =  fq[mxfreq].top();
       fq[mxfreq].pop();
       if(fq[mp[x]].empty()){
           mxfreq--;
           
       }
       mp[x]--;
       return x;
    }
};
/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */