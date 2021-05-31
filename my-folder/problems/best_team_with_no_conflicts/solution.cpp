class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
    vector<pair<int,int>> v;
    int n = scores.size();
    for(int i =0; i<n; i++){
        v.push_back({ages[i],scores[i]});
    }
        
    sort(v.begin(),v.end());
    vector<int> lis(n,0);
    //lis[0] = v[0].second;
    for(int i =0; i<n; i++){
        lis[i] = v[i].second;
    }
    
    for(int i =1; i<n; i++){
        for(int j =0; j<i; j++){
            
         if(v[i].second>=v[j].second){
            lis[i] = max(lis[i],v[i].second+lis[j]); 
         }   
            
        }
    }
    return *max_element(lis.begin(),lis.end());
    }
};