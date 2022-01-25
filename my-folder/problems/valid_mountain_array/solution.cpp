class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
     int n = arr.size();
     if(n<3) return false;
     int cnt =0;
     int cnt1 =0;
     for(int i =1; i<n-1; i++){
         /*if(arr[i]>arr[i-1] && ch == false){
             
         }
         if(arr[i]>arr[i-1] && ch == true){
             return false;
         }
         else {
             
             ch = true;
         }*/
         
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
            cnt++;
        } 
         if(arr[i] <= arr[i-1] && arr[i] <= arr[i+1]){
            cnt1++;
        } 
         
         
         
     }
      
    if(cnt ==1 && cnt1 ==0) return true;
    else return false;
     
    }
};