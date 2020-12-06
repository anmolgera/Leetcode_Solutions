class CustomStack {
public:
    
    int n;
    vector<int> stack,inc;
    CustomStack(int maxSize) {
        n = maxSize;
    }
    
    void push(int x) {
        if(stack.size()==n){
            return;
        }
        
        stack.push_back(x);
        inc.push_back(0);
    }
    
    int pop() {
      int i = stack.size()-1;
      if(i<0){
          return -1;
      }
        
        if(i>0){
            inc[i-1]+=inc[i];
        }
        
        int val = stack[i]+inc[i];
        stack.pop_back();
        inc.pop_back();
        return val;
        
    }
    
    void increment(int k, int val) {
        k = (k<=stack.size()? k : stack.size())-1;
        if(k>=0){
            inc[k]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */