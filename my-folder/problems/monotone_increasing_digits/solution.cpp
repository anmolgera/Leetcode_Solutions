class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        
        string res = to_string(N);
        
        int n = res.length();
        int mark =n;
        for(int i  = n-1; i>=1; i--){
            
            if(res[i]>=res[i-1]){
                continue;
            }
            
            else {
                
                mark = i;
                res[i-1] = res[i-1]-1;
                
                
            }
            
        }
        
        for(int i = mark ; i<res.length(); i++){
            res[i] = '9';
        }
        return stoi(res);
    }
};