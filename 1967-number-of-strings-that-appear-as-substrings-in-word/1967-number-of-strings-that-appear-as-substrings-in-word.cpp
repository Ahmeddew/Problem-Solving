class Solution {
public:
    int numOfStrings(vector<string>& s, string word) {
        int ans=0;
        for(int i=0; i<s.size();i++){
            ans+=word.find(s[i]) != string::npos;
        }
        return ans;
    }
};