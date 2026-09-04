class Solution {
public:
    string addBinary(string a, string b) {

        int zero = abs((int)a.size() - (int)b.size());

        if (a.size() > b.size()) {
            while (zero--)
                b = '0' + b;
        }
        else {
            while (zero--)
                a = '0' + a;
        }

        string ans;
        int rem = 0;

        for (int i = a.size() - 1; i >= 0; i--) {

            int sum = (a[i] - '0') + (b[i] - '0') + rem;

            ans.push_back((sum % 2) + '0');

            rem = sum / 2;
        }

        if (rem)
            ans.push_back('1');

        reverse(ans.begin(), ans.end());

        return ans;
    }
};