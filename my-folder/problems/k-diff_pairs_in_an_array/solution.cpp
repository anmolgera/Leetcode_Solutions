class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
    
    map<int,int> mp;
    int sum =0;
    for(auto i : nums) mp[i]++;
    for(auto i : mp){
        if(k> 0 && mp.find(i.first+k)!=mp.end()){
            sum += 1;
        }
        
        else if(k ==0 && i.second>1){
            sum +=1;
        }
    }
    return sum;
    }
};