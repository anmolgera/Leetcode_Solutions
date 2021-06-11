class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
    queue<int> q;
    q.push(0);
    int n = s.length();
    int k =0;
    while(!q.empty()){
        int s1 = q.size();
        while(s1--){
            auto i = q.front();
            q.pop();
            if(i==n-1) return true;
            k = max(k,i+minJump);
            int mn = min(n-1,i+maxJump);
            for(int j = k; j<=mn; j++){
                if(s[j]=='0'){
                    q.push(j);
                }
            }
            k = i+maxJump;
        }
    }
        return false;
    }
};