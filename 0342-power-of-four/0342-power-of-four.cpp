class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1)return 1;
        if (n <=0 )return 0;
        return ((log(n)/log(4))==int(log(n)/log(4)));
       
        
    }
};