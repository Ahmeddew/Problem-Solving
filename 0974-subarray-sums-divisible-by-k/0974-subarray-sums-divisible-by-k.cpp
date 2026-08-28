class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector<long long> freq(k, 0);
        int ans=0; 
        freq[0]=1;
        int sum=0;  // sum %k== 0  --> p[r]%k == p[w]%k 
        for(int i :nums) {
            sum+=i;
            int need= sum%k;

            if (need < 0)
             need += k;

            ans +=freq[need]; 

            freq[need]++;
        }
        return ans;
    }
};