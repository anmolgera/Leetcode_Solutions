class Solution {
public:
    
    int find(vector<int> & parent, int i){
        
        while(i!=parent[i]){
            i = parent[i];
        }
        return i;
        
    }
    
    bool equationsPossible(vector<string>& equations) {
    vector<int>parent(27,0);
    for(int i =0; i<27; i++){
        parent[i] =i;
    }
    
    int x = find(parent,0);
    //cout<<x<<endl;
        
    for(int i =0; i<equations.size(); i++){
       
        string s = equations[i];
        if(s[1]=='='){
           int p1 = find(parent,s[0]-'a');
           int p2 = find(parent,s[3]-'a');
           parent[p1] = p2;
        }
        
        
    }
    
     for(int i =0; i<equations.size(); i++){
       
        string s = equations[i];
        if(s[1]=='!'){
           
            if(find(parent,s[0]-'a')==find(parent,s[3]-'a')){
                return false;
            }
        }
        
        
    }
    
    return true;
        
    
    }
};