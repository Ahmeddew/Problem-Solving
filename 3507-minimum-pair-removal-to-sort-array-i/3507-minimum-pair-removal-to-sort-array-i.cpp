class Solution {
public:

    bool isValid(const vector<long long>& ans) {
        for (int i = 0; i + 1 < ans.size(); i++) {
            if (ans[i] > ans[i + 1])
                return false;
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {

        vector<long long> arr(nums.begin(), nums.end());

        int cnt = 0;

        while (!isValid(arr)) {

            long long mn = LLONG_MAX;
            int j = 0;

            for (int i = 0; i + 1 < arr.size(); i++) {

                long long sum = arr[i] + arr[i + 1];

                if (sum < mn) {
                    mn = sum;
                    j = i;
                }
            }

            
            arr[j] = mn;
            arr.erase(arr.begin() + j + 1);

            cnt++;
        }

        return cnt;
    }
};