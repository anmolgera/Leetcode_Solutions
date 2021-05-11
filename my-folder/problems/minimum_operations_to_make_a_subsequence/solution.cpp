class Solution {
public:
    int minOperations(vector<int>& target, vector<int>& arr) {
    map<int,int> mp;
    vector<int> v;
    for(int i =0; i<target.size(); i++){
        mp[target[i]] =i;
        
    }
        
    for(int i =0; i<arr.size(); i++){
        if(mp.find(arr[i])==mp.end()){
            
            continue;
        }
        
        auto it = lower_bound(v.begin(),v.end(),mp[arr[i]]);
        if(it==v.end()){
           v.push_back(mp[arr[i]]); 
        }
        else *it = mp[arr[i]];
     }    
     return target.size()-v.size();   
    }
};