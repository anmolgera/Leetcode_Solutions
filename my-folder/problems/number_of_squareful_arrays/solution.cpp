class Solution {
public:
    
  bool isSquare(int v) {
        int r = sqrt(v);
        return r * r == v;
    }   
 
    void permute(vector<int>& A, int idx, int& ans) {
        if (idx >= A.size()) {
            ++ans;
        }
        unordered_set<int> mp;
        for (int i = idx; i < A.size(); ++i) {
            if (mp.find(A[i])!=mp.end()) continue;
            mp.insert(A[i]);
            swap(A[i], A[idx]);
            if ((idx == 0) || (idx > 0 && isSquare(A[idx] + A[idx - 1]))) {
                permute(A, idx + 1, ans);
            }
            swap(A[i], A[idx]);
        }
    }
    
    int numSquarefulPerms(vector<int>& A) {
        sort(A.begin(), A.end());
        int ans = 0;
        permute(A, 0, ans);
        return ans;
    }
   
};