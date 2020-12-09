class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        map<int,int> mp;
        for(int i =0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(auto i : mp){
            
            if(mp[i.first]>0){
                
                for(int j = k-1; j>=0; j--){
                    
                    mp[i.first+j]-=mp[i.first];
                    if(mp[i.first+j]<0){
                        return false;
                    }
                    
                }
                
//mp[i.first] =0;
                
                
                
            }
               
            
            
        }
        return true;
        
    }
};