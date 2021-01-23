class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        vector<int> v;
        v.push_back(0);
        int mx =0;
        for(int i =0; i<gain.size(); i++){
            int s = v[i];
            v.push_back(gain[i]+s);
            if(mx<v[i+1]){
                mx = v[i+1];
            }
        }
        
        for(int i =0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
        
        cout<<endl;
        
       return mx; 
    }
};