/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
    if(node == NULL) return NULL;
    map<Node*,Node*> mp;
    queue<Node*> q;
    mp[node] = new Node (node->val, {});
    q.push(node);
    while(!q.empty()){
    auto curr = q.front();
        q.pop();
    for (auto neighbour : curr->neighbors)
    {
        if(mp.find(neighbour) == mp.end()){
            mp[neighbour] = new Node(neighbour->val, {});
            q.push(neighbour);
        }
        mp[curr]->neighbors.push_back(mp[neighbour]);
    }        
        
        
        
    }
    return mp[node];
    }
};