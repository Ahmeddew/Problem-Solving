class Solution {
public:
    int mySqrt(int x) {
        long long  l=0,r=x,mid,ans;
        while (l<=r){
            mid=(l+r)/2;
            if (mid*mid >= x  ){
                ans= mid;
                r=mid-1;
            }else {
                l=mid+1;
            }
        }
        return ans*ans >x ?  ans-1 :ans;
    }
};