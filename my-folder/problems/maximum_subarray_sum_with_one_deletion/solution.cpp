class Solution {
public:
    int maximumSum(vector<int>& arr) {
    int n = arr.size();
    vector<int> f(n,0);
    vector<int> b(n,0);
    int sum =arr[0];
    int mx = arr[0];
    f[0] =arr[0];
    for(int i =1; i<n; i++){
    sum = max(arr[i],arr[i]+sum);
    mx = max(mx,sum);
    f[i] = sum;    
    }
        
    sum = arr[n-1];
    b[n-1] = arr[n-1];
    for(int i =n-2;i>=0 ;i--){
    sum = max(arr[i],arr[i]+sum);
    
    b[i] = sum;    
    }
    for(int i =1; i<n-1; i++){
        mx = max(mx,b[i+1]+f[i-1]);
    }   
    return mx;
    
    }
};