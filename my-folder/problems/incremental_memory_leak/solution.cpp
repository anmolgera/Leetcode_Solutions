class Solution {
public:
    vector<int> memLeak(int memory1, int memory2) {
    int ans =1;
    bool flag = true;
    while(memory1>=0 && memory2>=0){
        
        if(memory1>=memory2){
            if(memory1-ans>=0)
            memory1-=ans; 
            else break;
        }
        
        else if(memory2>memory1 ){
            if(memory2-ans>=0)
            memory2-=ans;
            else break;
        }
        ans++;
        
    }    
        
    return {ans,memory1,memory2};
    }
};