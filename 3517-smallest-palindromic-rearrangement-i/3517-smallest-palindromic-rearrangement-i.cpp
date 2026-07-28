class Solution {
public:
    string smallestPalindrome(string s) {
        map<char, int> freq;
    for (auto &c: s)freq[c]++;
    string ans, left ,right,mid;
    for (auto [c, val]: freq) {
            left += string( val/ 2, c);
          if (val % 2 == 1) {
              mid = c;
          }

    }
    right= left ;
    reverse(right.begin(),right.end());
    ans =left+mid+right;
  return ans;
    }
};