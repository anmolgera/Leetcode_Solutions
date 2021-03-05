class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
     map<int,int> mp;
     for(auto i : candyType){
         mp[i]++;
     }
    int m = mp.size();
    int n = candyType.size();
    return min(n/2,m);
      }
};