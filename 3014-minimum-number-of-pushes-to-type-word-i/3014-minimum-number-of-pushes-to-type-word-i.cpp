class Solution {
public:
    int minimumPushes(string word) {
          int n =word.size() ,ans=0;
           if (n <=8) return n ;
           
             ans+=8,n-=8;
             int rem =n/8; 
              if (rem == 2) {
                ans+= 2*8;
                ans+=3*8 ;
                ans+=4*(n%8);
        
              }else if (rem ==1) {
                ans+= 2*8;
                ans+=3*(n%8);
              } else {
                ans+=2*(n%8);
              }
              
    return ans;
    }
};