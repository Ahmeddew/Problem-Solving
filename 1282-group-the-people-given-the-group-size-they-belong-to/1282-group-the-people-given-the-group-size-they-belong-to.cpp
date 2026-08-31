class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        vector<vector<int>> ans;
        unordered_map<int, vector<int>> hash;
        for(int i =0; i<arr.size(); i++){
            hash[arr[i]].push_back(i);
        }

       for (auto& [key, value] : hash) {

    for (int i = 0; i + key <= value.size(); i += key) {
        vector<int> temp(
            value.begin() + i,
            value.begin() + i + key
        );

        ans.push_back(temp);
    }
}
        return ans;
    }
};