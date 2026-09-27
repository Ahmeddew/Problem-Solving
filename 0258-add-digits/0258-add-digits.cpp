class Solution {
public:
long long  calc (int n){
    long long sum =0;
  while (n){
    sum+=n%10;
    n/=10;
  }
  return sum;
}
    int addDigits(int num) {
        long long  t=num;
        while (t>9){
         t= calc(t);
        }
        return t;
    }
};