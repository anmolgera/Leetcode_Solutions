class Solution {
public:
    const int N = 2e5+5;
    int countDifferentSubsequenceGCDs(vector<int>& nums) {
        int arr[N+1];
        
        for(int i =0; i<=N; i++){
            arr[i] = 0;
        }
        //int mx =0;

        for(auto i : nums){
            arr[i] = 1;
            
        }
        
        int c_gcd =0;
        int ans =0;
        for(int i =1; i<=N; i++){
            c_gcd =0;
            for(int j =i; j<=N; j+=i){
              
                if(arr[j]==1){
                    c_gcd = __gcd(c_gcd, j);
                }
                
                if(c_gcd ==i){
                    ans++;
                    break;
                }
                
            }
        }
        
        return ans;
    }
};