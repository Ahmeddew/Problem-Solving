class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0 , r=0;
        int maxLength=0;
        unordered_map<char,int>mp ;
        while(r<s.size()){
             mp[s[r]]++;
            while (mp[s[r]] !=1 ){
                mp[s[l]]--;
                l++;
            }

            maxLength= max(maxLength,r-l+1);
            r++;
        }
        return maxLength;
    }
};