class Solution {
public:
    string convertToTitle(int columnNumber) {
    string ans="";
    int n = columnNumber;
    while(n){
    n--;
    int curr = n%26;
    n/=26;
    ans.push_back(curr+'A');
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};