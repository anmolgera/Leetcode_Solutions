class Solution {
public:
    string maximumTime(string time) {
        
        for(int i =0; i<time.length(); i++){
            
            
         if(time[i]=='?' && i==0 && (time[i+1]-'0'<=3 || time[i+1]=='?')){
            time[i] = '2'; 
        }
           
        if(time[i]=='?' && i==0 && time[i+1]-'0'>=4){
            time[i] = '1'; 
        }
        
        
        if(i==1 && time[i]=='?' && time[i-1]=='2'){
            time[i] = '3';
        }
            
        else if(i==1 && time[i]=='?' && time[i-1]!='2'){
            time[i] =  '9';
        }
            
        if(i==3 && time[i] == '?'){
            time[i] = '5';
        }
            
        if(i==4 && time[i]=='?'){
            time[i] = '9';
        }
            
        }
        return time;
    }
};