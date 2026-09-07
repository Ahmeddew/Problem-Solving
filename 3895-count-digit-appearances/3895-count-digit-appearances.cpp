class Solution {
public:
int cntDigit(int n,int digit){
    int cnt=0;
    while (n){
        int rem=n%10;
        cnt+=(rem==digit);
        n/=10;
    }
    return cnt;
}
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0; 
        for(int i=0;i<nums.size();i++){
            ans+=cntDigit(nums[i],digit);
        }
        return ans;
    }
};