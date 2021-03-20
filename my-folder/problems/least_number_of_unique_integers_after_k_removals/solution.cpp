class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
    
    unordered_map<int,int> mp;
    priority_queue<int,vector<int> , greater<>> pq;
    
    for(int i =0; i<arr.size(); i++){
        mp[arr[i]]++;
    }
        
    for(auto i : mp){
        pq.push(i.second);
    }
        
    while(k){
        if(pq.top()>k){
            break;
        }
      k-=pq.top();
      pq.pop();
    }
    return pq.size();}
};