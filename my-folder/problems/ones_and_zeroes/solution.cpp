class Solution {
public:
    
    int knapsack(vector<int> &zero, vector<int>&one, int m, int n , int sz, vector<vector<vector<int>>>&dp )  {
        
        if(sz==0 || m <0 || n<0){
            return 0;
        }
        
      
        
        //int sum =0;
        if(dp[n][m][sz]!=-1) return dp[n][m][sz];
        if(zero[sz-1]<=m && one[sz-1]<=n){
           return dp[n][m][sz] = max(knapsack(zero,one,m-zero[sz-1],n-one[sz-1],sz-1,dp)+1,knapsack(zero,one,m,n,sz-1,dp));
        }
        
        else {
            return dp[n][m][sz]= knapsack(zero,one,m,n,sz-1,dp);
        }
        
    }
    
    
    
    int findMaxForm(vector<string>& strs, int m, int n) {
    
    //int n = strs.length();
    //sort(strs.begin(),strs.end());
    //reverse(strs.begin(),strs.end());
    vector<int> zero;
    vector<int> one;
    for(int i =0; i<strs.size(); i++){
        
        string s = strs[i];
        int a =0;
        int b =0;
        for(int j =0; j<s.length(); j++){
            if(s[j]=='0'){
                a++;
            }
            
            else b++;
        }
        
        zero.push_back(a);
        one.push_back(b);
        
    }
        
     int sz = zero.size();
     int so = one.size();
     vector<vector<vector<int>>>dp (n+1, vector<vector<int>>(m+1,vector<int>(sz+1,-1)));
     //cout<<one.size()<<" "<<zero.size()<<endl;
     for(int i =0; i<one.size(); i++){
         cout<<one[i]<<" "<<zero[i]<<endl;
     }
     return knapsack(zero,one,m,n,sz,dp);   
        
    }
};