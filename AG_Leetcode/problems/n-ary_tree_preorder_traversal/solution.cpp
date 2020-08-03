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
   
    
    void dfs(Node* root, vector<int> &res){
       
        if(root == NULL){
            
            return;
        }
        
        res.push_back(root->val);
        
        for(Node*child : root->children){
            
            dfs(child,res);
        }
    }
    
    
    
    vector<int> preorder(Node* root) {
        
          vector<int> res;
        stack<Node*> st;
        if (root) st.push(root);
        while (!st.empty()) {
            root = st.top(); st.pop();
            res.push_back(root->val);
            for (auto iter = root->children.rbegin(); iter != root->children.rend(); iter++) {
                if (*iter) st.push(*iter);
            }
        }
        return res;
        
        
    }
};