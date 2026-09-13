class Solution {
public:
    int countCommas(int n) { // 9999
         
        int cnt=0 ;

       while (n>=1000){
        cnt++,n--;
       }
       return cnt; 
    }
};