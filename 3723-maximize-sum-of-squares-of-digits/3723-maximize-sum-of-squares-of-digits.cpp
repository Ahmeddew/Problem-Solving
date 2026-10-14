class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
           if (sum <= 9 )
           {
             string res= to_string(sum);
             for(int i=0; i<num-1;i++){
                res+='0';
             }
             return res;
           }
           int ans=0;
           string res;
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
         int check=0;
         for(int i =0 ;i<num;i++){
          check+=9;
         }

           return  check <sum ? "":res ;
    }
};