class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        vector<vector<TreeNode*>> dp(n+2);
        dp[0] = {};
        dp[1] = {new TreeNode(0)};
        for (int idx = 3; idx <= n; idx += 2) {
            for (int i = 1; i < idx - 1; i += 2) {
                vector<TreeNode*> left = dp[i];
                vector<TreeNode*> right = dp[idx - i - 1];
                for (int l = 0; l < left.size(); l++) {
                    for (int r = 0; r < right.size(); r++) {
                        TreeNode *root = new TreeNode(0);
                        root->left = left[l];
                        root->right = right[r];
                        dp[idx].push_back(root);
                    }
                }
            }
        }
        return dp[n];
    }
};