
class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
    bool flag = true;
    queue<TreeNode*> q;
    q.push(root);
    int c = 1;
    int prev,next;
    while(!q.empty()){
        int s = q.size();
        prev =-1;
        next = INT_MAX;
        while(s--){
            
            auto i = q.front();
            q.pop();
            int m = i->val;
            if(c%2){ //even index level
            if(m%2 == c%2 && m>prev){
                if(i->left)q.push(i->left);
                if(i->right)q.push(i->right);
                prev = m;
            }
            
            else return false;
            }
            
            else {  // odd index level;
                if(m%2 == c%2 && m<next){
                if(i->left)q.push(i->left);
                if(i->right)q.push(i->right);
                next = m;
            }
            
            else return false; 
                
                
            }
            
            
        }
        c^=1;
    }
    return true;    
    }
};