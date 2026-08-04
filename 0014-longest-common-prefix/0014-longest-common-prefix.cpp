class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         sort(strs.begin(),strs.end());
          for(auto i:strs)cout<<i<<' ';
           string s=strs[0],e=strs[strs.size()-1],ans;
                 
         for( int i=0; i<s.size();i++) {
              if (s[i] == e[i] && i< e.size()){
                   ans+=s[i];
              }else {
                break;
              }
         }
         return ans;
    }
};