class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {
    
    sort(clips.begin(),clips.end());
    int i = 0;
    int end = 0;
    int farthest = 0;
    int n = clips.size();
    int ans = 0;
    
    while(i < n && end < time){
        
        ans += 1;
        
        while(i < n && clips[i][0] <= end){
         
        farthest = max(farthest, clips[i][1]);
        i += 1;
                
        }
        
        if(farthest == end) return -1;
        end = farthest;
    }
    
    if(end >= time) return ans;    
    else return -1;
        
    }
};