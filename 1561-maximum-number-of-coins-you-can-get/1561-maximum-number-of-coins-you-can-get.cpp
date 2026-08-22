class Solution {
public:
    int maxCoins(vector<int>& v) {
         // 8 7 4 2 2 1  //9,8,7,6,5,4,3,2,1
         sort (v.rbegin(),v.rend());
         int ans=0 ;
         for(int i =1 ;i<v.size()-(v.size()/3);i+=2){
             ans+=v[i];
         }
         return ans;
    }
      
     
};