class Solution {
public:
    void backtrack(vector<int>& digits, string& curr,
                   vector<bool>& vis, int& ans)
    {
        if (curr.size() == 3)
        {
            if ((curr.back() - '0') % 2 == 0)
                ans++;

            return;
        }

        for (int i = 0; i < digits.size(); i++)
        {
            if (vis[i])
                continue;

            // Skip duplicate choices at the same level
            if (i > 0 && digits[i] == digits[i - 1] && !vis[i - 1])
                continue;

            // No leading zero
            if (curr.empty() && digits[i] == 0)
                continue;

            vis[i] = true;
            curr.push_back(digits[i] + '0');

            backtrack(digits, curr, vis, ans);

            curr.pop_back();
            vis[i] = false;
        }
    }

    int totalNumbers(vector<int>& digits)
    {
        sort(digits.begin(), digits.end());

        vector<bool> vis(digits.size(), false);
        string curr;
        int ans = 0;

        backtrack(digits, curr, vis, ans);

        return ans;
    }
};