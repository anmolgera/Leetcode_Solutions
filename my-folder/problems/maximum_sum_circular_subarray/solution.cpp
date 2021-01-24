class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
       
        int n = a.size();
        
        int sum =0;
        int mx =0;
        int maxi = INT_MIN;
        for(int i =0; i<a.size(); i++){
            if(a[i]>maxi){
                maxi = a[i];
            }
        }
        
        if(maxi<0){
            return maxi; //for all negative elements
        }
        for(int i =0; i<a.size(); i++){
            sum+=a[i];
            if(sum>mx){
                mx = sum;
            }                   // for all array
            
            else if(sum<0){
                sum =0;
            }
        }
        
        int mn =INT_MAX;
        sum =0;
        int sum1= 0;
        for(int i =0; i<a.size(); i++){
            sum+=a[i];
            sum1+=a[i];
            if(mn>sum){
                mn = sum;
            }                // for all array finding minimum sum subarray
            
             if(sum>=0){
                sum =0;
            }
        }
        
        
        
        
        
        int mx2=0;
        int mx3 =0;
        sum =0;
        for(int i =0; i<a.size()-1; i++){
            sum+=a[i];
            if(sum>mx2){
                mx2 = sum;
            }
            
            else if(sum<0){
                sum =0;         // max sum subaaray from left
            }
            
            
        }
        sum =0;
        for(int i = a.size()-1; i>=1; i--){
            sum+=a[i];
            if(sum>mx3){
                mx3 = sum;
            }
            
            else if(sum<0){
                sum =0;       // max sum subaaray from rig
            }
            
            
            
        }
        
       cout<<mn<<endl;
       return max({mx3,mx2,mx,sum1-mn}); 
        
        
    }
};