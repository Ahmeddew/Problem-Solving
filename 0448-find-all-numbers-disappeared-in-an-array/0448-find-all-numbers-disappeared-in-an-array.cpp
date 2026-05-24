class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
     vector<int> v;
    set<int> st;
    for (int i = 0; i < nums.size(); i++) {
        st.insert(nums[i]);
    }
    for (auto i : st) {
        v.push_back(i);
    }

    int cnt = 1;
    vector<int> ans;
    for (int i = 0; i < v.size(); i++) {

        if (v[i] == cnt) {
            cnt++;
            continue;
        }
        else {

            while (cnt < v[i]) {
                ans.push_back(cnt);
                cnt++;
            }

            cnt++;
        }
    }
      while (cnt <= nums.size()) {
            ans.push_back(cnt);
            cnt++;
        }


     return ans;
    }
};