class Solution {
public:
    int reachNumber(int target) {
        
        int i =1;
        int sum =0;
        int ans =0;
        
        target = abs(target);
        while(sum<target){
            
            sum+=i;
            ans++;
            i++;
        }
        
        if((sum-target)%2){
            
           ans++; 
            
            if(i%2==0){
                ans++;
            }
            
            
        }
        
        return ans;
        
    }
};