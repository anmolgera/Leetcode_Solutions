class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    vector<int> v;
    for(int i =0; i<arr.size()-1; i++){
        int mx =0;
        for(int j = i+1; j<arr.size(); j++){
          mx = max(mx,arr[j]);  
        }
        v.push_back(mx);
    } 
      v.push_back(-1);
      return v;
    }
};