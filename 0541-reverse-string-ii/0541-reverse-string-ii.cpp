class Solution {
public:
    string reverseStr(string s, int k) {
        int n = s.length();
        for (int i = 0; i < n; i += 2 * k) {
          
            int right = min(i + k, n);
            reverse(s.begin() + i, s.begin() + right);
        }
        return s;
    }
};