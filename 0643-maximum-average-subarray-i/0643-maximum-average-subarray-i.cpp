class Solution {
public:
    double findMaxAverage(vector<int>& v, int k) {
        double  sum =0;
    for (int i = 0; i <k ; ++i) {
        sum+=v[i];
    }
    double  MaxSum =sum ;
    int l= 0,r=k , n= v.size()-1;
    while(r<=n ){
        sum -=v[l];
        sum+=v[r];
       MaxSum=max(MaxSum,sum );
       l++,r++;

    }
    return MaxSum/k;
    }
};