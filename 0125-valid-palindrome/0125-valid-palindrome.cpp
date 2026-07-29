class Solution {
public:
    bool isPalindrome(string s) {
        string ans,x;
        for(auto &c :s){
            if (isalpha(c) || isdigit(c)){
                ans+=tolower(c);
            }
        }
        x=ans;
              reverse(ans.begin(),ans.end());
          return ans == x ? true :false ;  
    }
};