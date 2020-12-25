class Solution {
public:
    
    bool dfs(vector<int>&nums, vector<int>&side, int idx, int &sum){
        if(idx == nums.size()){
            return side[0]==side[1] && side[1]==side[2] && side[2]==side[3];
        }
        
        for(int i =0; i<4; i++){
            
            if(side[i]+nums[idx]>sum) continue;
            side[i]+=nums[idx];
            if(dfs(nums,side,idx+1,sum))return true;
            side[i]-=nums[idx];
        }
        return false;
    }
    
    
    
    bool makesquare(vector<int>& nums) {
        if(nums.size()==0){
            return false;
        }
        int sum =0;
        for(int i =0; i<nums.size(); i++){
            sum+=nums[i];
        }
        if(sum%4){
            return false;;
        }
        
        sum = sum/4;
        vector<int> side(4,0);
        sort(nums.begin(),nums.end(),greater<int>());
        return dfs(nums,side,0,sum);
    }
};