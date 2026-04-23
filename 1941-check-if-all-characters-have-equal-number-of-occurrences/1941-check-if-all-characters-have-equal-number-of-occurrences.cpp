class Solution {
public:
    bool areOccurrencesEqual(string a) {
        int freq[26] = {};
    for (int i = 0; i < a.size(); ++i) {
        freq[a[i] - 'a']++;
    }
    vector<int>v;
    for (int i = 0; i < 26; ++i) {
         if (freq[i] == 0 )continue;
        else{
            v.push_back(freq[i]);
        }
    }
    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[0]) {
            return false;
        }
    }
    return true;
    }
};