class Solution {
public:
void subsets(vector<int>& a, int st,
             vector<int>& current,
             vector<vector<int>>& result) {

    if (st == a.size()) {
        result.push_back(current);
        return;
    }

    // Skip
    subsets(a, st + 1, current, result);

    // Take
    current.push_back(a[st]);
    subsets(a, st + 1, current, result);

    // Undo
    current.pop_back();
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>current;
         vector<vector<int>> result;
         int st=0;
         subsets(nums,st,current,result);
         return result;
    }
};