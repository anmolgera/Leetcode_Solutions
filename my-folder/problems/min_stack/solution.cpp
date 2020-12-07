class MinStack {
public:
    /** initialize your data structure here. */
    
    class Node {
    public:
        int   val;
        int   min;
        Node* next;
        
        Node(int val1, int min1){
           this->val = val1;
           this->min = min1;
           this->next = NULL;
        }
        
        Node(int val1, int min1, Node* next1){
           this->val = val1;
           this->min = min1;
           this->next = next1;
        }
    };
    
    Node *cur;
   /* MinStack() {
        cur = new Node(0, INT_MAX, nullptr);
    }*/
    
    void push(int x) {
        
        if(cur == NULL){
            cur = new Node(x,x);
        }
        else cur = new Node(x, min(x, cur->min), cur);
    }
    
    void pop() {
        cur = cur->next;
    }
    
    int top() {
        return cur->val;
    }
    
    int getMin() {
        return cur->min;
    }
    

    
};