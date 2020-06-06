class Solution {
public:
    
    int getlen(string s, int left, int right){

int l = left;
int r = right;

while(l>=0 && r<s.length()&& s[l]==s[r]){

 l--;
 r++;


}

return r - l -1;







}



    string longestPalindrome(string s) {
        if(s.length()==0){
 	return "";
 }
        
   else  if(s.length()==1){
        return s;
    } 
        
        
        else {
 int start =0;
 int end =0;




 for(int i =0; i<s.length(); i++){

int len1 = getlen(s,i,i+1);
int len2 = getlen(s,i,i);

int len = max(len1,len2);

if(len > end - start){
start = i-(len-1)/2;
end = i + len/2;

}




 }




return s.substr(start,end-start+1);
        }   
    }
};