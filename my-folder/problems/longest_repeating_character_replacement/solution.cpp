class Solution {
public:
    int characterReplacement(string s, int k) {
    int n = s.length();
    int freq[26];
    for(int i =0; i<26; i++){
        freq[i] =0;
    }
    
    int left =0;
    int mx =0;
    int right =0;
    int mfreq =0;
    for(right =0; right<s.length(); right++){
        
        freq[s[right]-'A']++;
        mfreq = max(mfreq,freq[s[right]-'A']);
        int leftele = (right-left+1)-mfreq;
        if(leftele>k){
        freq[s[left]-'A']--;    
        left++;
        }
        mx = max(mx,right-left+1);
    }
     return mx;   
    }
};