class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            mp[i] = nums[i];
        }

        sort(nums.begin(), nums.end());

        int i = 0, j = nums.size() - 1;

        while (i < j) {
            int sum = nums[i] + nums[j];

            if (sum == target) {
                int a = -1, b = -1;

                for (auto &[index, value] : mp) {
                    if (value == nums[i] && a == -1) {
                        a = index;
                    }

                    if (value == nums[j] && index != a && b == -1) {
                        b = index;
                    }
                }

                return {a, b};
            }

            if (sum > target)
                j--;
            else
                i++;
        }

        return {};
    }
};