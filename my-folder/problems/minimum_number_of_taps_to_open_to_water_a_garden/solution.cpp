class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
    //t n = ranges.size();
    vector<int> dp(n+1,0);
    
    for(int i =0; i<ranges.size(); i++){
        int left = max(0,i-ranges[i]);
        dp[left] = max(dp[left],i+ranges[i]);
    }
    
     int i =0, end =0, farthest_point =0;
     int ans=0;
     while(i<n && end<n ){
         
         while(i < n && i <= end) {
             farthest_point = max(dp[i],farthest_point);
             i+=1;
             
         }
         if(farthest_point == end) {
            return -1;
         }
         ans +=1;
         end = farthest_point;
     }
     return ans;
    }
};