class Solution {
public:
    
    
    
    
   static  bool compare ( const int &a, const int&b){
        
        int count1 =0;
        int c =a;
        while(c){
            
            count1 +=c%2;
            c= c/2;
            
            
            
        }
        
        int count2 =0;
        int d = b;
        while(d){
            
            count2 +=d%2;
            d = d/2;
            
            
        }
        
        if(count1 == count2){
            
            return a<b;            
            
        }
        
        return count1<count2;
        
        
        
        
        
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};