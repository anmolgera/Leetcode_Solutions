class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> cntMap;
        for (int x: arr)
            cntMap[x]++;
        
        vector<int> filtered;
        for (auto& p: cntMap)
            filtered.push_back(p.second);
        sort(filtered.begin(), filtered.end(), greater<int>());
        
        int n = arr.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += filtered[i];
            if (sum >= n / 2)
                return i + 1;
        }
        return 0;
    }
};