class Solution {
public:
    int minDominoRotations(vector<int>& A, vector<int>& B) {
     auto top = A[0], bot = B[0], top1 = 0, bot1 = 0, top2 = 0, bot2 = 0;
     for (auto i = 0; i < A.size(); ++i) {
       if (A[i] != top && B[i] != top) top = 0;
       if (A[i] != bot && B[i] != bot) bot = 0;
       top1 += A[i] == top;
       bot1 += B[i] == top;
       top2 += A[i] == bot;
       bot2 += B[i] == bot;
     }
        return top || bot ? min(A.size() - max(top1, bot1), A.size() - max(top2, bot2)) : -1;   
    }
};