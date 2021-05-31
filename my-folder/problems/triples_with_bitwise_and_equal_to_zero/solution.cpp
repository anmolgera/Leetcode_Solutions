class Solution {
public:
    int countTriplets(vector<int>& nums) {
    unordered_map<int,int> mp;
    for(int i =0;  i<nums.size(); i++){
        for(int j =0; j<nums.size(); j++){
            mp[(nums[i]&nums[j])]++; 
        }
    }    
    int count =0;
    for(int i =0; i<nums.size(); i++){
        for(auto j : mp){
            if((j.first&nums[i])==0){
                count+=j.second;
            }
        }
    }
    return count;
    }
};