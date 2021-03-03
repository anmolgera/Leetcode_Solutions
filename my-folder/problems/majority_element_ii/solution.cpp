class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      
    int cnt1=0,cnt2=0,ele1 = INT_MAX,ele2 = INT_MAX;
    
    for(auto i : nums){
        
        if(ele1 == i){
            cnt1++;
        }
        
        else if(ele2 ==i){
            cnt2++;
        }
        
        else if(cnt1==0){
            ele1 = i;
            cnt1++;
        }
        
        else if(cnt2==0){
            ele2 =i;
            cnt2++;
        }
        
        else {
            cnt1--;
            cnt2--;
            
        }
    }
        
    cnt1 =0,cnt2 =0;
    for(auto i : nums){
        if(i==ele1){
            cnt1++;
        }
        
        else if(i==ele2){
            cnt2++;
        }
    }
    
    vector<int> res;
    if(cnt1>nums.size()/3){
        res.push_back(ele1);
    }
        
    if(cnt2>nums.size()/3){
        res.push_back(ele2);
    }
        
    return res;     
        
    }
};