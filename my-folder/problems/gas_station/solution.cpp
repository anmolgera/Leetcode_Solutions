class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int total_sum =0;
    int temp_sum =0;
    int ans =0;
    for(int i =0; i<cost.size(); i++){
    temp_sum += (gas[i]-cost[i]);
    total_sum += (gas[i]-cost[i]);
    if(temp_sum<0){
        ans = i+1;
        temp_sum = 0;
    }
        
    }
    if(total_sum < 0) return -1;
    else return ans;
    }
};