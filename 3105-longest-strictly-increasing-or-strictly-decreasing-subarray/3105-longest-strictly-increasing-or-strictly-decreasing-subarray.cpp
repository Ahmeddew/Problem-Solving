class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
         int longest_increasing = 1;
        int longest_decreasing = 1;
        int m1 = 1;
        int m2 = 1;
        
        for (int i = 1; i < arr.size(); ++i) {
            if (arr[i] > arr[i - 1]) {
                longest_increasing++;
                longest_decreasing = 1;
                m1 = max(m1, longest_increasing);
            } else if (arr[i] < arr[i - 1]) {
                longest_decreasing++;
                longest_increasing = 1;
                m2 = max(m2, longest_decreasing);
            } else {
                longest_increasing = 1;
                longest_decreasing = 1;
            }
        }

        return max(m1, m2);
    }
};