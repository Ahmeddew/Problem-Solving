class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {

        vector<pair<int, int>> v;

        for (int i = 0; i < arr.size(); i++) {
            v.push_back({arr[i], i});
        }

        sort(v.begin(), v.end());

        vector<int> ans(arr.size());

        int rank = 1;

        for (int i = 0; i < v.size(); i++) {

            if (i > 0 && v[i].first != v[i - 1].first)
                rank++;

            ans[v[i].second] = rank;
        }

        return ans;
    }
};