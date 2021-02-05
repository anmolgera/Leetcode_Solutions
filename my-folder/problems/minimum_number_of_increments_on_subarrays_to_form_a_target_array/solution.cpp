class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int sum =0;
        for(int i =1; i<target.size(); i++){
            if(target[i]>target[i-1]){
            sum+=(target[i]-target[i-1]);
            }
        }
        return sum+target[0];
    }
};