class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>occ;
        vector<int>ans;
        for(int i=0; i<s.size();i++){
            if (s[i] == c)occ.push_back(i);
        }
        for(int i=0 ;i< s.size() ;i++){
            int dist=INT_MAX;
            for(int j=0; j< occ.size();j++){
                dist= min(dist,abs(i-occ[j]));
            }
            ans.push_back(dist);
        }
        return ans;
    }
};