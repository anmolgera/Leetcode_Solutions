class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
    queue<int> q;
    q.push(start);
    while(!q.empty()){
    
     auto p = q.front();
     q.pop();
     if(arr[p]==0) return true;
     if(arr[p]<0) continue;
     if(p+arr[p]<arr.size()){
         q.push(p+arr[p]);
     }
     if(p-arr[p]>=0){
         q.push(p-arr[p]);
     }
     
     arr[p]*=-1;  
        
    }
    
    return false;
        
    }
};