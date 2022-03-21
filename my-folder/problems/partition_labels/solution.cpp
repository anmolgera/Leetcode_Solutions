class Solution {
public:
    vector<int> partitionLabels(string S) {
            if(S.length()==0){
            return {};
        }
        
        map<int,int> mp;
        
        for(int i=0; i<S.length(); i++){
            
            mp[S[i]-'a']=i;
        }
        
        int start =0;
        int end =0;
        vector<int> v;
        for(int i =0; i<S.length(); i++){
            
            end = max(end,mp[S[i]-'a']);
            if(end==i){
                v.push_back(end-start+1);
                start = end+1;
            }
            
            
        }
        return v;    
    }
};