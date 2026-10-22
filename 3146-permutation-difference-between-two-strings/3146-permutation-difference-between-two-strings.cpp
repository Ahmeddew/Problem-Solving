class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char ,int>p1,p2;
        for(int i=0; i<s.size();i++){
             p1[s[i]]=i;
        }
        for(int i=0; i<t.size();i++){
            p2[t[i]]= i;
        }
        int ans=0;
        for(int i=0;i<s.size();i++){
            ans+=abs(p1[s[i]]-p2[s[i]]);
        }
        return ans;
    }
};