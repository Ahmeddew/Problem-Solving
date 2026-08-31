class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        vector<vector<int>> ans;
        unordered_map<int, vector<int>> mp;

        for (int i = 0; i < arr.size(); i++) {
            int groupSize = arr[i];

            mp[groupSize].push_back(i);

            if (mp[groupSize].size() == groupSize) {
                ans.push_back(mp[groupSize]);
                mp[groupSize].clear();
            }
        }

        return ans;
    }
};