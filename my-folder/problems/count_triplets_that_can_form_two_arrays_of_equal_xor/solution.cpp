class Solution {
public:
    int countTriplets(vector<int>& arr) {
    unordered_map<int,vector<int>> mp;
    int x =0;
    int ans =0;
    mp[0].push_back(-1);
    for(int i =0; i<arr.size(); i++){
        x^=arr[i];
        for(auto j : mp[x]){
            ans+=(i-j-1);
            
        }
        
        mp[x].push_back(i);
        
    }
    return ans;
    }
};