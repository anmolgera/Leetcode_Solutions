class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
       
        map<int,int> mp;
        
        for(auto i : A){
            
            mp[i]++;
        }
        
        map<int,int> :: iterator it;
        vector<int> v;
        
        for (auto i : B){
            
            it = mp.upper_bound(i);
            int x;
            if(it!=mp.end()){
                x = it->first;
                
            }
            
            else x =  mp.begin()->first;
            
            mp[x]--;
            
            if(mp[x]==0){
              mp.erase(x);  
                
            }
           v.push_back(x); 
            
        }
        
        
     return v;   
        
    }
};