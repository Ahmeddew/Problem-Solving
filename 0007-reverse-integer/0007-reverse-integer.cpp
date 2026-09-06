class Solution {
public:
    int reverse(int x) {
        bool neg=0;
        long long z=x;
        if (x<0){
            neg=1;
            z*=-1;
            }
        long long  rev=0,n=to_string(z).size();
        while (z) {
            int rem=z%10; 
            rev+= rem*pow(10,n-1);
            z/=10;
            n--;
        } 
        if (neg)rev*=-1;

    
        return (rev<pow(-2,31) || rev >(pow(2,31))-1) ? 0:rev ; 
    }
};