/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if(root==NULL){
            return {};
        }
        
        queue<Node*> q;
        q.push(root);
        vector<vector<int>> ans;
        while(!q.empty()){
            
            int s = q.size();
            vector<int> sol;
            while(s--){
                
                auto i = q.front();
                sol.push_back(i->val);
                q.pop();
                for(auto cn : i->children){
                    if(cn){
                        q.push(cn);
                    }
                }
                
                
                
                
                
            }
            ans.push_back(sol);
        }
        
        
        
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};