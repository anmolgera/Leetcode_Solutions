class Solution {
public:
    
    bool check(int n ){
        int num = n;
        while(n!=0){
            int y = n%10;
            n = n/10;
            if(y==0){
                return false;
            }
            
            else {
                
                if(num%y){
                    return false;
                }
                
            }
        }
        
        return true;
    }
    
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i = left; i<=right; i++){
            if(check(i)){
                v.push_back(i);
            }
            
        }
        return v;
        
    }
};