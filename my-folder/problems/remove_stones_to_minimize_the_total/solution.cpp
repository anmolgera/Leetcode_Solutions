class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
    priority_queue<int> q;  int x,sum=0;
        for(auto a:piles)q.push(a);
        while(k--){
            x=q.top();q.pop(); //take the  max
            x-=floor(x/2);  //remove its half
            q.push(x);   //put it back
        }
        while(!q.empty()){
            sum+=q.top();q.pop();    //take the sum
        }
        return sum;    
    }
};