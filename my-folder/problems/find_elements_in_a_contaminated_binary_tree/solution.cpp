/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class FindElements {
public:
    map<int,int> mp;
    void dfs(TreeNode* root, int val){
       
        if(root==NULL){
            return;
        }
        mp[val]++;
        dfs(root->left,val*2+1);
        dfs(root->right,val*2+2);
        
        
        
    }
    
    FindElements(TreeNode* root) {
     dfs(root,0);   
        
        
        
        
    }
    
    bool find(int target) {
    if(mp[target]>0){
        return true;
    }   
    else return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */