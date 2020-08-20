/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
 map<TreeNode* ,TreeNode* >par;
    vector<int>ans;
    set<int>V;
    void parent(TreeNode* root,TreeNode* Papa){
        if(!root)return ;
        par[root]=Papa;
        parent(root->left,root);
        parent(root->right,root);
    }
    void Dis(TreeNode* root,int K){
        if(!root || K<0)return ;
        if(K==0){
            if(V.count(root->val)==0)
            ans.push_back(root->val),V.insert(root->val);
            return ;
        }
        if(V.count(root->val))return ;
        V.insert(root->val);
        Dis(root->left,K-1);
        Dis(root->right,K-1);
    }  
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        ans.clear();
        par.clear();
        parent(root,nullptr);
        Dis(target,K);
        TreeNode* Papa=par[target];
        K--;
        while(Papa && K>=0){
            Dis(Papa,K);
            K--,Papa=par[Papa];
        }
        return ans;
    }
};