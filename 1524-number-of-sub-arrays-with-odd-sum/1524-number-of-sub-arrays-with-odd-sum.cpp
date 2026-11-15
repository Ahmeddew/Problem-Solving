class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
      long long sm=0,ev=1,odd= 0,ans=0;
      for(auto &i :arr){
        sm+=i;
        if (sm&1) {
            ans+= ev;
            odd++; 
        }else {
            ans+=odd;
            ev++;
        }
       
      }
       return ans %( 1000000007);
    }
        
};