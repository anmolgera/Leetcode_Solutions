class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
   
    int sum =0;
    int ans =0;
    int t = threshold*k;
    for(int i =0; i<arr.size(); i++){
        sum+=arr[i];
        if(i>=k){
            sum-=arr[i-k];
        }
        
        if(i>=k-1 && sum >=t){
            ans++;
        }
    }
    return ans;
    }
};