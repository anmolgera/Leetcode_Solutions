class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
    vector<vector<int>> v(n,vector<int>(n,n));
    for(int i =0; i<mines.size(); i++){
        
        v[mines[i][0]][mines[i][1]] =0;
    }
        
    for(int i =0; i<n; i++){
        for(int j =0, k = n-1, l =0 , r  =0,  u =0,  d =0; j<n && k>=0; j++,k--){
        if(v[i][j]==0){
            l =0;
        }    
        else l++;
        v[i][j] = min(v[i][j],l);
            
        if(v[i][k]==0){
            r =0;
        }    
        else r++;
        v[i][k] = min(v[i][k],r);    
        
        if(v[j][i]==0){
            u =0;
        }    
        else u++;
        v[j][i] = min(v[j][i],u);
            
         if(v[k][i]==0){
            d =0;
        }    
        else d++;
        v[k][i] = min(v[k][i],d);
            
            
        }
    }    
    int mx =0;
    for(int i =0; i<n;  i++ ){
        for(int j =0; j<n; j++){
            mx = max(mx,v[i][j]);
        }
    }
    return mx;    
    }
};