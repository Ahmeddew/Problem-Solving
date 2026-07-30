 class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n = nums.size();

        for (int i = 0; i < n; ) {
            int start = i;

            // Move while numbers are consecutive
            while (i + 1 < n && nums[i + 1] == nums[i] + 1) {
                i++;
            }

            if (start == i) {
                // Single number
                ans.push_back(to_string(nums[start]));
            } else {
                // Range
                ans.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
            }

            i++;
        }

        return ans;
    }
};