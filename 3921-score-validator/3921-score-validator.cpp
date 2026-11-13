class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {
        vector<int>ans(2);
        for(auto s : events){
            if (s =="W" ) {ans[1]++; if (ans[1] == 10 )return ans;}
            else if (s == "WD"){ans[0]++;}
            else if (s == "NB"){ans[0]++;}
             else {
               ans[0]+=(s[0]-'0');
             }
        }
        return ans;
    }
};