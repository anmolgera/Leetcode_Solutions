class Solution {
public:
    
int memo[30 + 1][3000 + 1];

int lastStoneWeightIIRecursive(vector<int>& stones, int n, int i, int sum1, int sum2)
{
    if(i == n)
    {
        return abs(sum1-sum2);
    }
    if(memo[i][sum1] != -1)
    {
        return memo[i][sum1];
    }
    return memo[i][sum1] = min(lastStoneWeightIIRecursive(stones, n, i+1, sum1 + stones[i], sum2), lastStoneWeightIIRecursive(stones, n, i+1, sum1, sum2 + stones[i]));
}

int lastStoneWeightII(vector<int>& stones) {
    int n = stones.size();
    memset(memo, -1, sizeof(memo));
    int totalSum = accumulate(stones.begin(), stones.end(), 0);
    
    int minWeight = lastStoneWeightIIRecursive(stones, n, 0, 0, 0);
    return minWeight;        
}
};