class Solution {
public:
    string getPermutation(int n, int k) {
    int fact =1;
    vector<int> num;
    //u/s.push_back(0);
    for(int i =1; i<n; i++){
        fact*=i;
        num.push_back(i);
    }
    num.push_back(n);
    string ans ="";
    k--;
    while(true){
        ans+=to_string(num[k/fact]);
        num.erase(num.begin()+k/fact);
        if(num.size()==0){
            break;
        }
        k = k%fact;
        fact/=num.size();
        
        
    }
    return ans;
        
    }
};