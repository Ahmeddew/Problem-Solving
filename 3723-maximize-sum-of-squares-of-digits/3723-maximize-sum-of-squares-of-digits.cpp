class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
         string res;
           if (sum <= 9 )
           {
              res= to_string(sum);
             for(int i=0; i<num-1;i++){
                res+='0';
             }
             return res;
           }
           int ans=0;
           int curr=9;
         for(int i=0; i<num ;i++){
          if (ans+ curr <sum ){
            ans+=curr;
              res+=to_string(curr);
          }else {
            while (ans+curr != sum){
                curr--;
            }
           res+=to_string(curr);
           ans+=curr;
          }
         }
         
         
           return  9*num <sum ? "":res ;
    }
};