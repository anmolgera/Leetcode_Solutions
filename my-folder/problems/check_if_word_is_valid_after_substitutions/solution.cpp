class Solution {
public:
    bool isValid(string s) {
      for(auto i = s.find("abc"); i!=string :: npos; i = s.find("abc")){
          
          s.erase(i,3);
      }
        
     return s.empty();
    }
};