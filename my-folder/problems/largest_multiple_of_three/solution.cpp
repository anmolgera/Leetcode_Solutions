class Solution {
public:
    string largestMultipleOfThree(vector<int>& digits) {
        
        int as[6] = { 1, 4 ,7, 2, 5, 8 };
        int ar[6] = { 2, 5, 8, 1, 4 ,7 };
        
        int d[10]={0};
        int sum =0;
        string res = "";
        for(auto i : digits){
            d[i]++;
            sum+=i;
        }
        while(sum%3!=0){
            
            for(auto i : (sum%3==1)? as : ar){
                
                if(d[i]){
                    d[i]--;
                    sum-=i;
                    break;
                }
                
                
                
                
            }
        }
        
        for(int i =0; i<10; i++){
            for(int j =0; j<d[i]; j++){
                res+=(i+ '0');
            }
        }
       // sort(res.begin(),res.end());
        reverse(res.begin(),res.end());
        
        if(res.size() && res[0]=='0'){
            return  "0";
        }
        return res;
        //cout<<sum<<endl;
        return "";
        
    }
};