class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        
        sort(satisfaction.begin(),satisfaction.end());
        int n = satisfaction.size();
        int tot =0;
        int ans =0;
        for(int i =n-1; i>=0 && tot+satisfaction[i]>0; i--){
            tot+=satisfaction[i];
            ans+=tot;
        }
        
        return ans;
        
    
    }
};