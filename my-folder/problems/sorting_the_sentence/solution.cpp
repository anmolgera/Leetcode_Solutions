class Solution {
public:
    string sortSentence(string s) {
    int i =0;
    int j =0;
    vector<pair<int,string>> ans;
    while(i<s.length()){
        string res ="";
        int num =-1;
        while(i<s.length() && s[i]!=' ' ){
            if(s[i]-'0' >= 0 && s[i]-'0'<=9) {num = s[i]-'0'; break;}
            else res+=s[i];
            i++;
        }
        ans.push_back({num,res});
        i++;
    }
    vector<string> ans2;
    sort(ans.begin(),ans.end());
    string f="";
        
    //cout<<ans[0].second<<"h";
    /*for(int i =0; i<ans.size(); i++){
        
        cout<<ans[i].second<<" ";
    }
    cout<<endl;*/
    for(int i =0; i<ans.size(); i++){
        if(ans[i].second!="") f+=ans[i].second+" ";
        //if(i!=ans.size()-1 && ans[i].second!=" ") f+=' ';
    }
    f.pop_back();
    return f;
    }
};