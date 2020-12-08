class MyQueue {
public:
    /** Initialize your data structure here. */
    vector<int> res;
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        res.push_back(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(res.size()==0){
            return -1;
        }
        int val = res[0];
        res.erase(res.begin());
        return val;
    }
    
    /** Get the front element. */
    int peek() {
        return res[0];
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(res.size()==0){
            return true;
        }
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */