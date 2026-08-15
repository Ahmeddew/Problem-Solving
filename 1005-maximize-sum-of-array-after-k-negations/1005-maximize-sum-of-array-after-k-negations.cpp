class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() && k > 0; i++) {
            if (nums[i] < 0) {
                nums[i] *= -1;
                k--;
            }
        }

        sort(nums.begin(), nums.end());

        if (k % 2 == 1) {
            nums[0] *= -1;
        }

        int ans = 0;
        for (auto x : nums) {
            ans += x;
        }

        return ans;
    }
};