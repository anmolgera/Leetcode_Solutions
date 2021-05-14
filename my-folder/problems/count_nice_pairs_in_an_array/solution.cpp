class Solution {
public:
    
    const int N = 1e9+7;
    
    int rev(int n){
        
        string s = to_string(n);
        reverse(s.begin(),s.end());
        n = stoi(s);
        return n;
        
    }
    
   
    
    int countNicePairs(vector<int>& nums) {
    unordered_map<int,long> mp;
    int count =0;
    int sum =0;
   
   for(int i =0; i<nums.size(); i++){
    
   // nums[i] + rev(nums[j]) = nums[j] + rev(nums[i]) can be rearranged as nums[i] - rev[nums[i]] = nums[j] - rev[nums[j]] 
 
       count+=(mp[nums[i]-rev(nums[i])]%N); 
       count%=N;
       mp[nums[i]-rev(nums[i])]++;
    }
    
    //Or there is another way below;
    
        
       
    long ans =0;   
    for(auto i : mp){
    long j = i.second;
    ans = ans + ((j*(j-1))/2)%N; // nC2
    ans%=N;
    }
    
        
    return ans;
    }
};