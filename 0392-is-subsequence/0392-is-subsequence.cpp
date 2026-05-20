class Solution {
public:
    bool isSubsequence(string s, string t) {
        string ans;
        int j=0; 
        for(int i=0 ;i<t.size();i++){
                if (t[i] == s[j]){
                    ans+=t[i];
                j++;}

        }
        return ans ==s;
    }
};