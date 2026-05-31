class Solution {
public:
    int minSwaps(string s) {
        int open = 0, unmatched = 0;

        for (char c : s) {
            if (c == '[')
                open++;
            else {
                if (open > 0)
                    open--;
                else
                    unmatched++;
            }
        }

        return (unmatched + 1) / 2;
    }
};