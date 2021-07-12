class Solution {
public:
    int numberOfSubstrings(string s) {
    vector<int> count ={0,0,0};
    int j =0;
    int ans =0;
    for(int i =0; i<s.length(); i++){
        count[s[i]-'a']++;
        while(count[0] && count[1] && count[2]){
            count[s[j]-'a']--;
            j++;
        }
       ans+=j; 
        
    }
    return ans;
    }
};