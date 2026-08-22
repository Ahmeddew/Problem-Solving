class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,prod=1,ans=n;
        while (n){
            sum+=n%10;
            prod*=n%10;
            n/=10;
        }
        return (ans%(sum+prod)==0) ? true :false ;
    }
};