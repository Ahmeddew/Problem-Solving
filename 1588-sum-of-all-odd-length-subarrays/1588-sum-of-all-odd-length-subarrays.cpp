class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& v) {
        for (int i = 1; i < v.size(); ++i) {
        v[i] += v[i - 1];
    }

    int ans = 0;

    for (int i = 0; i < v.size(); i++) {
        for (int j = i; j < v.size(); j += 2) {
            if (i == 0)
                ans += v[j];
            else
                ans += v[j] - v[i - 1];

            
        }
    }
    return ans;
    }
};