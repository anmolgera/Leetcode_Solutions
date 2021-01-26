class Solution {
public:
    
    bool static compare(int a, int b){
        string s = to_string(a);
        string s1 = to_string(b);
        return s+s1 >s1+s;
    }
    string largestNumber(vector<int>& nums) {
       string s =  "";
       sort(nums.begin(),nums.end(),compare);
       if(nums[0]==0){
           return "0";
       }
       
       for(int i =0; i<nums.size(); i++){
           s+=to_string(nums[i]);
       }
        //reverse(s.begin(),s.end());
        return s;
    }
};