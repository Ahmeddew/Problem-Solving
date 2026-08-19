class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n ==1)return true;
        long long l=1 ,r= n,mid,ans=-1;
        while (l<=r){
            mid= (l+r)/2;
            if (pow(3,mid)== n){
                 return true;
            }else if (pow(3,mid) > n){
                r=mid-1;
            } else l =mid+1;
        } 
       return false ;
    }
};