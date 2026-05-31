class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char,vector<int>>occ ;
    for (int i = 0; i <s.size() ; ++i) {
        occ[s[i]].push_back(i);
    }
    set<string> ans;
    for(const auto& [id,vec]:occ){
        if (vec.size() < 2) continue;
        int first= vec.front();
        int last = vec.back();
        char c= id;
        for (int i = first+1; i <last ; ++i) {
            string pal;
            pal+=c;
            pal+=s[i];
            pal+=c;
            ans.insert(pal);
        }

    }
    return ans.size();
    }
};