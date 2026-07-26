class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        int lastStart = intervals[0][0];
        int lastEnd = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            // No overlap
            if (intervals[i][0] > lastEnd) {
                ans.push_back({lastStart, lastEnd});

                // Start a new interval
                lastStart = intervals[i][0];
                lastEnd = intervals[i][1];
            }
            // Overlap
            else {
                lastEnd = max(lastEnd, intervals[i][1]);
            }
        }

        // Push the last merged interval
        ans.push_back({lastStart, lastEnd});

        return ans;
    }
};