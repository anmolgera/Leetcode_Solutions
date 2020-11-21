class Solution {
public:
    
    string getA(string s, int a){
        
        for(int i =0; i<s.length(); i++){
            
            if(i%2){
                
                int ch = s[i]-'0';
                ch = (ch+a)%10;
                s[i] = ch+'0';
                
            }
            
            
        }
        
       return s; 
        
        
        
    }
    
    
    string getB(string s, int k){
        
        reverse(s.begin(),s.end());
        reverse(s.begin(),s.begin()+k);
        reverse(s.begin()+k,s.end());
        return s;
        
        
        
        
    }

    
    
    string findLexSmallestString(string s, int a, int b) {
        
        
        set<string> vis;
        queue<string> q;
        //vector<string> vis;
        q.push(s);
        
        while(!q.empty()){
            
            string curr = q.front();
            q.pop();
            
            string one = getA(curr,a);
            
            if(vis.find(one)==vis.end()){
                q.push(one);
                vis.insert(one);
                
                
            }
            
             one = getB(curr,b);
            
            if(vis.find(one)==vis.end()){
                q.push(one);
                vis.insert(one);
                
                
            }
            
            
            
            
            
        }
        
        return *vis.begin();
        
        
        
        
    }
};