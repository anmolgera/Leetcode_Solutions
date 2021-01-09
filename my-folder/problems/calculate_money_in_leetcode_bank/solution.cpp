class Solution {
public:
    int totalMoney(int n) {
        int j =1;
        int sum =0;
        int count =j;
       for(int i=1; i<=n; i++){
             if(i%7==1 && i!=1){
                 j++;
                 count =j;
             }
            //cout<<count<<endl;
            sum+=count;
           count++;
       } 
        return sum;
    }
};