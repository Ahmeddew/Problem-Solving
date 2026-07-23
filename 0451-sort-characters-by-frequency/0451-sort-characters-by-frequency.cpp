class Solution {
public:
    string frequencySort(string s) {
        map<char,int>freq;
        for(auto &c :s){
            freq[c]++;
        };
        vector<pair<int, int>> v(freq.begin(), freq.end());

        sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
            return a.second > b.second;   // sort by value descending
        });
        string ans;
        for(auto &p :v ){
            for(int i=0; i<p.second;i++){
                ans+=p.first;
            }
        }
        return ans;
    }
};
