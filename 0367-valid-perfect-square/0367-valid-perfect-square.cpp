class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=0,r=1e10,mid,ans=0;
        while (l<=r){
            mid= (l+r)/2;
            if ( mid*1.0  > num/(mid*1.0)  ){
                r=mid-1;
            }else if (mid*1.0 == (num)/(mid*1.0)) {
                      ans=1;
                      break;
            }else {
                l=mid+1;

            }
        }
        return ans;
    }
};