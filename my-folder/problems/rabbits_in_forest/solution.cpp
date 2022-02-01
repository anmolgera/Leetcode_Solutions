class Solution {
public:
    
    int dp[1001];
    int numRabbits(vector<int>& answers) {
        
             unordered_map<int, int> c;
        for (int i : answers) c[i]++;
        int res = 0;
        for (auto i : c) res += (i.second + i.first) / (i.first + 1) * (i.first + 1);
        return res;  
    }
};