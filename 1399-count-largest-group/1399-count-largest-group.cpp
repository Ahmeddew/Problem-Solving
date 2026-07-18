class Solution {
public:
int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
    int countLargestGroup(int n) {
       unordered_map<int,int>freq;
        for(int i=1; i<=n;i++){
          int sum= sumOfDigits(i);
          freq[sum]++;
        }
       int mx=0;
       for(auto [sum,cnt] :freq){
         mx = max(mx, cnt);
       }
       int ans= 0;
       for(auto [sum,cnt] : freq){
        ans+= (cnt == mx);
       }
       return ans;
    }
};