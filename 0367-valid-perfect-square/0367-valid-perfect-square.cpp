class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=0,r=num,mid,ans=0;
        while (l<=r){
            mid= (l+r)/2;
            long long sqrt =mid*mid;
            if (  sqrt >num ){
                r=mid-1;
            }else if (sqrt  == num) {
                      ans=1;
                      break;
            }else {
                l=mid+1;

            }
        }
        return ans;
    }
};