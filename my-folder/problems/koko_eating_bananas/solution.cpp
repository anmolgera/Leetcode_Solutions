class Solution {
public:
    
    bool can_eat_banana(int speed, vector<int>&piles, int h){
        int no_of_hours =0;
        for(int i =0; i<piles.size(); i++){
               no_of_hours += (piles[i] + (speed-1))/(speed);
        }
        return no_of_hours <= h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
    int l =1;
    int r = 1e9 + 7;
    int ans = INT_MAX;
    while(l < r){
        
        int mid = (l+r)/2;
        if(can_eat_banana(mid,piles,h)){
            r = mid;
            ans = min(ans,r);
        }
        
        else {
            l = mid+1;
        }
        
    }
    return ans;
    }
};