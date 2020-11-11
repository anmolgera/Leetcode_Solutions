class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
       
        vector<int> check(nums);
         
         vector<bool> result;
        
        
        for(int i =0; i<l.size(); i++){
            
            int x = l[i];
            int y = r[i];
            
            if((y==x) ){
                result.push_back(false);
            }
            
              else if(x+1 ==y){
                result.push_back(true);
            }
            
            else {
                
                vector<int> check1;
                for(int i =x; i<=y; i++){
                    check1.push_back(nums[i]);
                }
                
                sort(check1.begin(),check1.end());
                int d = check1[1]-check1[0];
                int f =0;
                
                /*for(int i =0; i<check1.size(); i++){
                    //cout<<check1[i]<<" ";
                }*/
                //cout<<endl;
                //cout<<d<<endl;
                
               // cout<<endl;
                for(int i =2; i<check1.size(); i++){
                    
                    if((check1[i]-check1[i-1])!=d){
                        result.push_back(false);
                        //cout<<check[i]-check[i-1]<<" ";
                        f =1;
                        break;
                    }
                    
                }
                
                //cout<<endl;
               if(!f) result.push_back(true);
                
                
            }
            
            
            
            
            
        }
        
        
        
        
        
        return result;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};