class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
       
        if(nums.size()==0){
            return {};
        }
       sort(nums.begin(),nums.end());
        
       vector<int> v(nums.size()+1,1);
       int n = nums.size();
       for(int i =1; i<n; i++){
           for(int j =0; j<i; j++){
               
               if(nums[i]%nums[j]==0){
                   v[i] = max(v[i],v[j]+1);
               }
           }
       }
        int mx =0;
        int indx =0;
        for(int i =0; i<v.size(); i++){
           
            if(v[i]>mx){
                mx = v[i];
                indx = i;
            }
        }
        //cout<<mx<<endl;
       vector<int> v1;
       v1.push_back(nums[indx]);
       for(int i = indx-1; i>=0; i--){
           
           if(v1.back()%nums[i]==0 && v[i]==mx-v1.size()){
               v1.push_back(nums[i]);
           }
       }
        
       reverse(v1.begin(),v1.end());  
       return v1; 
        
    }
};