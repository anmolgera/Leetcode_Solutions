class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
    
    
     priority_queue<int> pq;
     stations.push_back({target,0});
     int prevloc =0;
     int currfuel = startFuel;
     int ans =0;
     for(int i =0; i<stations.size(); i++){
     
     int loc = stations[i][0];
     int fuel = stations[i][1];
     int dis = loc - prevloc;
     if(currfuel>=dis){
      //ans++;
      currfuel -=dis;
      pq.push(fuel);
     }
         
     else {
         
      while(currfuel<dis && !pq.empty()){
          int tp = pq.top();
          pq.pop();
          currfuel +=tp;
          ans++;
      }   
      
      if(currfuel<dis) return -1;
      else {
          currfuel -=dis;
          pq.push(fuel);
      }   
        
         
     }
     prevloc = loc;
     }
   
    return ans;    
    }
};