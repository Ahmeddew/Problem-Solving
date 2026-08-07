class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        
         // [1,0,0,0,0,0,1]
         if (arr.size() == 1 && arr[0] == 0 ){
            return true;
         } 
         int czeros=0;
         for(int i=0; i<arr.size();i++){
             if (   i == 0 && arr[i] == 0 && arr[i+1] == 0){
                arr[i]=1;
                n--;
                i++;
             }
             if (  i == arr.size()-1 && arr[i]==0 && arr[i-1] ==0 ){
                arr[i]=1;
                n--;
             }
            if ( i>0 && i<arr.size()-1 && arr[i] ==0 
            &&arr[i-1]==0 && arr[i+1] ==0){
                  n--;
                   
                 i++;
            }
             
         } 
          
         return  n<=0;
    }
};