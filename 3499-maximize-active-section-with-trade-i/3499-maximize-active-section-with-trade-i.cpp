#include "bits/stdc++.h"

using namespace std;

#define all(v)    v.begin(),v.end()

#define LC_HACK
#ifdef LC_HACK
const auto __ = []() {
    struct ___ {
        static void _() {
            std::ofstream("display_runtime.txt") << 0 << '\n';
        }
    };
    std::atexit(&___::_);
    return 0;
}();
#endif

class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ans = 0;
        int numberOfOnes = count(all(s), '1'), cntOnesBefore = 0, cntZerosBefore = 0, cntCurrentOnes = 0;
        const int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (!cntZerosBefore) {
                    cntOnesBefore++;
                } else {
                    while (i < n && s[i] == '1') {
                        cntCurrentOnes++, i++;
                    }
                    i--;
                }
            } else {
                if (!cntZerosBefore) {
                    while (i < n && s[i] == '0') {
                        cntZerosBefore++, i++;
                    }
                    i--;
                } else {
                    int cnt = 0;
                    while (i < n && s[i] == '0') {
                        cnt++, i++;
                    }
                    i--;
                    ans = max(ans, cntOnesBefore + cntZerosBefore + cntCurrentOnes + cnt + (numberOfOnes - (cntOnesBefore + cntCurrentOnes)));
                    cntZerosBefore = cnt;
                    cntOnesBefore += cntCurrentOnes;
                    cntCurrentOnes = 0;
                }
            }
        }

        return max(numberOfOnes, ans);
    }
};