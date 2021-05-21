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
    int maxDepth(Node* root) {
    int ans =0;
    if(root==NULL) return 0;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        ans++;
        int s =q.size();
        while(s--){
        auto j = q.front();
        q.pop();
        
        for(int i =0; i<j->children.size(); i++){
            if(j->children[i])q.push(j->children[i]);
        }
    }
    }
    return ans;    
    }
};