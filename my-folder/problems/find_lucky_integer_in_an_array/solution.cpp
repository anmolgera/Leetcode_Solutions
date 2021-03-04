class Solution {
public:
    int findLucky(vector<int>& arr) {
    map<int,int> mp;
    for(int i : arr){
        mp[i]++;
    }
    int ans =-1;    
    for(auto i : mp){
        if(i.first==i.second){
          ans = i.first;  
        }
    }
    if(ans>0){
        return ans;
    }
    else return ans;
    }
};