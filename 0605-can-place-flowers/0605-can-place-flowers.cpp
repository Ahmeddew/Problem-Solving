class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int valid=0;
        if (flowerbed.size() == 1 && flowerbed[0] == 0 )return true;
        for(int i =0 ;i<flowerbed.size(); i++){
            if (flowerbed[i] == 1) continue;
            // handle 0 , n-1 index 
             if (i ==0  && flowerbed[i+1] == 0 || i == flowerbed.size()-1 && flowerbed[i-1] == 0 ){
                flowerbed[i]=1;
                n--;
             }else {
                if (  i > 0 && i < flowerbed.size()-1 && flowerbed[i-1] ==0 && flowerbed[i+1] ==0  ){
                    flowerbed[i] =1;
                    n--;
                   }

             }
                   
                
            
        }
        return n<=0; 
         
    }
};