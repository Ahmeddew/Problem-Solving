class Solution {
public:
    long long sumAndMultiply(int n) {
        string x;
          long long sum=0;
        while (n){
            if (n%10){ x+=(n%10)+'0';sum+=n%10;}
            n/=10;
        }
        reverse(x.begin(),x.end());
        
     return x.empty()? 0:sum*stoll(x);
    }
};