class MedianFinder {
public:
    /** initialize your data structure here. */
   
    priority_queue<int> fh;
    priority_queue<int,vector<int>,greater<int>> sh;
    
   
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(fh.empty() || fh.top()>=num){
            fh.push(num);
        }
        
        else sh.push(num);
        
        if(fh.size()>sh.size()+1){
            sh.push(fh.top());
            fh.pop();
        }
        
        else if(fh.size()+1<sh.size()){
            fh.push(sh.top());
            sh.pop();
        }
    }
    
    double findMedian() {
      if(fh.size()==sh.size()) {
          if(fh.size()==0){
              return 0;
          }
          else return double(fh.top()+sh.top())/2.0;
      } 
        
      else {
          if(fh.size()>sh.size()) return fh.top();
          else return sh.top();
      }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */