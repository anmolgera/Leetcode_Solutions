class Solution {
public:
    vector<vector<int>> threeSum(vector<int>&a) {
     
           vector<vector<int>> result;
        
        //step1 : check for edge condtions
        if(a.size()<3)
            return result;
        
        //step2 : sort
        sort(a.begin(),a.end());
        
        //step3 : Perform the same two pointer approach as you did in 2sum problem but within a for loop this time 
		//and also skip the duplicates because we need unique triplets only
        for(int i=0;i<a.size()-2;i++)
        {
            int start=i+1;
            int end=a.size()-1;
            
            //skip duplicates
            if(i>0 and a[i]==a[i-1])
                continue;
            
            while(start<end)
            {
                if(a[start]+a[end]==-a[i])
                {
                    result.push_back({a[start],a[i],a[end]});
                    start++;
                    end--;
                    //check for duplicates again
                    while(start<end and a[start]==a[start-1])
                        start++;
                    while(start<end and a[end]==a[end+1])
                        end--;
                }
                else if(a[start]+a[end]>-a[i])
                    end--;
                else
                    start++;
            }
                
        }
            
        return result;   
        
    }
};