class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        map<int,int> mp;
        for(int i =lowLimit; i<=highLimit; i++){
            int j = i;
            int sum =0;
            while(j!=0){
                int y = j%10;
                j/=10;
                sum+=y;
            }
            
            mp[sum]++;
        }
        int mx =0;
        for(auto i : mp){
            if(i.second>mx){
                mx = i.second;
            }
        }
        
       return mx;
    }
};