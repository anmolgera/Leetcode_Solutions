class Solution {
public:
    int findTheWinner(int n, int k) {
    queue<int> q;
    for(int i =1; i<=n; i++){
        q.push(i);
    }
        
    while(q.size()>1){
        int s = k;
        while(s>1){
        int m = q.front();
            q.pop();
            q.push(m);
            s--;
            
        }
        q.pop();
    }
    return q.front();
    }
};