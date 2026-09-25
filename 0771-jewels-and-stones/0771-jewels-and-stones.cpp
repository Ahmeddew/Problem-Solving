class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>st(jewels.begin(),jewels.end()) ;
        int cnt=0; 
        for(auto &c :stones){
            cnt+=(st.count(c));
        }
        return cnt;
    }
};