class Solution {
public:
    
    // Sort strings in order of decreasing length 
    static bool compare(string &s1,string &s2) {
        return s1.size() > s2.size();
    }
    
    // Check if b is subsequence of a using 2 pointer solutions
    bool isSubsequence(string a,string b) {
        int ptr1 = 0, ptr2 = 0;
        while(ptr1 < a.size() && ptr2 <b.size()) {
            if(a[ptr1] == b[ptr2]) ptr2++;
            ptr1++;
        }
        return ptr2 == b.size();
    }
    int findLUSlength(vector<string>& strs) {
        
        // 1. Sort strings according to their length 
        //    such that we check the longest string always.
        
        sort(strs.begin(),strs.end(),compare);
        
        // 2.Create a frequency map to store frequencies of 
        //   all strings
        map<string,int> T;
       for(int i=0; i<strs.size(); i++)
           T[strs[i]]++;
        
        
        // 3. Iterate through all the strings
        //     a. If a string has frequency greater than 1 then skip it
        //     b. Otherwise, check if the string is a subsequence of all larger strings
        //        If it is not a subsequence of any larger string return its size
        //     c. If the longest string is unique, no need to check for subsequence just
        //         return its length
        
       for(int i=0; i<strs.size(); i++) {
           if(T[strs[i]] > 1) continue;
           else {
               string currentStr = strs[i];
               if(!i) return currentStr.size();
               for(int j=0; j<i; j++) {
                   if(!isSubsequence(strs[j],currentStr)) {
                       if(j==i-1) return currentStr.size();
                   }
                   else break;
               }
           } 
        }
        
       //     4. None of strings are possible return invalid
        return -1;
    }
};