class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
    
         string t="";
         int n =INT_MAX;
         set<string>str;
         for(int i=0 ;i<s.size();i++){
         string ans="",curr;int ones=0  ;
            for(int j= i; j<s.size();j++){
             ans+=s[j];
              ones+=(s[j] == '1');
             if (ones == k) {
                    if (ans.size() < n) {
                        n = ans.size();
                        t = ans;
                    }
                    else if (ans.size() == n && ans < t) {
                        t = ans;
                    }

                    break;
                }
            }
             

         }
          
          return t;
            }
 
          
     
};