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
class Solution {
public:
    
    void  cal(vector<int>v, int &sum){
        
        int s = v.size()-1;
        int base =1;
        
        while(s>=0){
            
            sum+=base*v[s];
            base*=2;
            s--;
            
            
            
        }
        
        
        
        
        
    }
    
    void calculate(TreeNode*root, vector<int> v, int &sum){
        
        if(root ==NULL) return;
        
        v.push_back(root->val);
        
        
        if(root->left == NULL && root->right == NULL){
            
            
            cal(v,sum);
        }
        
        calculate(root->left,v,sum);
        calculate(root->right,v,sum);
        
        
        
        
        
        
        
    }
    
    
    
    
    
    
    int sumRootToLeaf(TreeNode* root) {
        
        int sum =0;
        vector<int> v;
        
        calculate(root,v, sum);
        return sum;
        
    }
};