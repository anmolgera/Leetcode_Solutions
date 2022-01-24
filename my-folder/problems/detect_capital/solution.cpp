class Solution {
public:
    bool detectCapitalUse(string word) {
    
    int cnt_lower =0;
    int cnt_upper =0;
    int n = word.length();
    bool first_letter_capital= true;
    if(word[0]>='a' && word[0]<='z') first_letter_capital = false;
    for(int i =1; i<n; i++){
        if(word[i]>='a' && word[i]<='z'){
            cnt_lower++;
        }
        else if (word[i]>='A' && word[i] <='Z'){
            cnt_upper++;
        }
        else return false;
     }
     n--;
     if(!first_letter_capital && cnt_upper && n>0) return false;
     else if((cnt_lower == n) || (cnt_upper == n )) return true;
     else return false;
        
    }
};