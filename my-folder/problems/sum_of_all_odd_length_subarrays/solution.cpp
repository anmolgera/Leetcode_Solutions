class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
     
        
    int sum =0;
    for(int i =0; i<arr.size()-1; i++){
        for(int j =i+1; j<arr.size(); j++){
            int s =0;
            for(int k =i; k<=j; k++){
                s+=arr[k];
                
            }
            if((j-i)%2==0){
              sum+=s;      
             }
        }
    }
    return accumulate(arr.begin(),arr.end(),sum);
    }
};