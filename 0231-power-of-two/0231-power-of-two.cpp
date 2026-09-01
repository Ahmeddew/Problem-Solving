class Solution {
public:
    bool isPowerOfTwo(int n) {
        

        int l=0,r=72,mid,ans=0;

        while (l<=r){
            mid= (l+r)/2;
            if (pow(2,mid) >=n){
                ans=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
         
        return (pow(2,ans) == n ? true :false);
    }
};