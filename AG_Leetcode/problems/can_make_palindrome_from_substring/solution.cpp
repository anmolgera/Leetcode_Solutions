class Solution {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        
      //prefix vector
        vector<vector<int>> vec;
        
        // current sum
        vector<int> tmp(26, 0);
        vec.push_back(tmp);
        
        // fill prefix vector
        for(int i=0; i<s.size(); i++){
            tmp[s[i]-'a']++;
            vec.push_back(tmp);
        }
        
        vector<bool> ans;
        for(auto const& q: queries){
            int lo = q[0], hi = q[1], k = q[2];
            vector<int> cnt = vec[hi+1];
            
            // odd = elements to be matched
            int odds = 0, sum = 0;
            
            // compute letter count from prefix array
            for(int i=0; i<26; i++){
                cnt[i]-=vec[lo][i];
                sum += cnt[i];
                odds += (cnt[i]%2);
            }
            
            // if total sum of elements is odd, decrement odds--
            // we can change odds/2 elements to match other odds/2 elements so odds/2<=k or rewriting it as odds<=2*k(considering odds can be odd ^_^)
            ans.push_back((odds-=(sum%2))<= k*2?true:false);
            
        }
        return ans;
    
       }
  
    };