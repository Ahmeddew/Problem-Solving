class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string first= strs[0];
        string ans="";
        bool flag = 0;
        for(int i=0 ;i<first.size();i++){
               char c=first[i];
            for(int j=0; j<strs.size() ;j++){
                string w= strs[j];
              if (c != w[i] || i>=w.size() ){ return ans;}
            }
             ans+=c;
        }
        return ans;

    }
};