class Solution {
    bool can (vector<int>& piles ,long long k,int h ){
        long long totalTime=0;
        for (int i = 0; i <piles.size() ; ++i) {
            totalTime += ceil(1.0 * piles[i] / k);
        }
        if (totalTime <= h){
            return true;
        }else return false ;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long l=1,r=1e18,mid,ans=0;
        while (l<=r){
            mid= (l+r)/2;
            if (can( piles,mid,h) ){
                ans =mid;
                r=mid-1;
            } else {
                l=mid+1;

            }
        }
        return ans;
    }
};