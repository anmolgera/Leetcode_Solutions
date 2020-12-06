class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
       vector<int> prefixXor(arr.size()+1,0),result;
        for(int i=0;i<arr.size();i++)                         //Create Prefix Xors as mentioned above.
            prefixXor[i+1]=prefixXor[i]^arr[i];
        for(vector<int> &v:queries)
            result.push_back(prefixXor[v[1]+1]^prefixXor[v[0]]);  //Add result to the query according to the above observation.
        return result;
        
        
        
    }
};