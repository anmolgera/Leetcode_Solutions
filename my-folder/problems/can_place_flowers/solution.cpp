class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    int i = 1;
    
    //if(sz < 3) return false;
    flowerbed.insert(flowerbed.begin(),0);
    flowerbed.push_back(0);
    int sz = flowerbed.size();
    while(i+1< sz){
    
    if(flowerbed[i-1] + flowerbed[i] + flowerbed[i+1] == 0) {
    
    flowerbed[i] =1;
    i++;
    n--;
    }
    i++;    
    }
        
    return n<=0;
    }
};