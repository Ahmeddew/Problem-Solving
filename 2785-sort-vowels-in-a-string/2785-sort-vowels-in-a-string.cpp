class Solution {
public:
    string sortVowels(string s) {
        vector<char>ans;
        vector<char>vowels={'a','A','o','O','E','e','i','I','u','U'};
        for(int i =0; i<s.size();i++){
            if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end()){
                ans.push_back(s[i]);
            }
        }
        sort(ans.begin(),ans.end());
           int idx=0;
        for(int i =0 ;i<s.size();i++){
             if (find(vowels.begin(), vowels.end(), s[i]) != vowels.end()){
                s[i]= ans[idx++];
            }
        }
        return s;
    }
};