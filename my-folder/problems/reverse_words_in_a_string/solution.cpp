class Solution {
public:
    string reverseWords(string s) {
    int i =0;
    while(s[i]==' '){
        i++;
    }
    int j =i;
    vector<string> v;
    while(j<s.length()){
        string res ="";
        //i =j;
        bool flag = false;
        while(j<s.length() && s[j]!=' '){
            res+=s[j];
            j++;
            flag =  true;
            
        }
        if(flag) v.push_back(res);
        j++;
    }
    reverse(v.begin(),v.end());
    int n = v.size();
    string ans ="";
    for(int i =0; i<n-1; i++){
       ans+=v[i]+" ";
    }
    ans+=v[n-1];
  
    return ans;
    }
};