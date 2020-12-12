class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        
        
        int count[26] ={0};
        int mx =0;
        for(int i =0; i<tasks.size(); i++){
            
            count[tasks[i]-'A']++;
            mx = max(mx,count[tasks[i]-'A']);
        }
       
        cout<<mx<<endl;
        int ans = (mx-1)*(n) + mx;
        
        int sec =0;
        for(auto i : count){
            if(i==mx){
                sec++;
            }
        }
        
        return max((int)tasks.size(),ans+sec-1);
    }
};