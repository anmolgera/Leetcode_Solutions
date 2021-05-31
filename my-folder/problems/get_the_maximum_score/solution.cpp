class Solution {
public:
    const int mod = 1e9+7;
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
    int i =0;
    int j =0;
    long sum1 =0;
    long  sum2 =0;
    long res =0;
    while(i<nums1.size() && j<nums2.size()){
        
    if(nums1[i]<nums2[j]){
    sum1 +=nums1[i];
    i++;
    }
    else if(nums1[i]>nums2[j]){
      sum2 +=nums2[j];
      j++;
        
    }
        
    else {
        res+=nums1[i] + max(sum1,sum2);
        sum1=0,sum2=0;
        i++;
        j++;
        
    }
        
        
    }
    while(i<nums1.size()) sum1+=nums1[i++];
    while(j<nums2.size()) sum2+=nums2[j++];
    res+=max(sum1,sum2);
    return res%mod;
    }
};