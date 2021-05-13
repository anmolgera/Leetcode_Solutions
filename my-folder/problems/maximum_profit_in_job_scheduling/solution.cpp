class Solution {
public:
    
     int binarysearch(vector<vector<int>>&v,int i){
        
    int l =0;
    int r = i;
    int mid ;
    while(l<=r){
        mid= (l+r)/2;
        if(v[mid][0]<=v[i][1]){
           if(v[mid+1][0]<=v[i][1]){
               l = mid+1;
           }
           else return mid;
        }
        
        else r = mid-1;
        
    }
    return -1;    
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
     
    int n = startTime.size();
    vector<vector<int>> v(n,vector<int>(3,0));
    for(int i =0; i<n; i++){
        v[i] = {endTime[i],startTime[i],profit[i]};
    }
    //int mx =0;
    sort(v.begin(),v.end());
    vector<int> dp(n,v[0][2]);
    for(int i =1; i<v.size(); i++){
        int j = binarysearch(v,i);
        int profit = v[i][2];
        if(j!=-1){
            profit += dp[j];
        }
        
       dp[i]  = max(dp[i-1], profit);
        
        
    }
    return *max_element(dp.begin(),dp.end());
    }
};