class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
    queue<int> q;
    
        
    for(int i =1; i<=9; i++){
        q.push(i);
    }
    vector<int> ans;    
    while(!q.empty()){
        
    auto f = q.front();
    q.pop();
    if(f <= high && f >= low){
       ans.push_back(f); 
    }
    
     if(f > high) break;
     int num = f%10;
     if(num > 8){
         //ans.push_back(f);
         
     }
     else q.push(f*10 + (num+1));
        
    } 
     return ans;   
    }
};