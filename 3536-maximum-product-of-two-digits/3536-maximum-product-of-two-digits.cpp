class Solution {
public:
    int maxProduct(int n) {
     int first=INT_MIN,second=INT_MIN ;
     while (n){
           int rem=n%10;
              if (rem >= first) {
            second = first;
            first = rem;
        } else if (rem >= second) {
            second = rem;
        }
             n/=10;
     }
     return first*second;
    }
};