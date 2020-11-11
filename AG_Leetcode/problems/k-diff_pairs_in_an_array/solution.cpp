        class Solution {
        public:
            int findPairs(vector<int>& nums, int k) {


                int count=0;
                set<pair<int,int>> s;
                for(int i=0; i<nums.size(); i++){

                 for(int j = i+1; j<nums.size(); j++){

                      if(abs(nums[i]-nums[j])==k && s.count({nums[i],nums[j]})==0 &&  s.count({nums[j],nums[i]}) ==0 ){

                            s.insert({nums[i],nums[j]});  
                            count++;

                        }


                    }



                }
               return count; 
            }
        };