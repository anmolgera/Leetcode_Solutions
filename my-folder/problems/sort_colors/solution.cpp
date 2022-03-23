class Solution {
public:
    void sortColors(vector<int>& a) {
    int n=a.size();
        int l=0,m=0,r=n-1;
        while(m<n && m<=r ){
            if(a[m]==0){
                swap(a[l++],a[m++]);
                
                
            }
            else if (a[m]==2){
                swap(a[m],a[r--]);
                
               
            }
            else {
                 m++;
                
                
            }
        }    
    }
};