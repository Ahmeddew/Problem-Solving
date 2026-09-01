class Solution {
public:
    void backtrack(string &s, string &curr,vector<string>&ans,int st, vector<string> phone ){

       // base case
          if (curr.size() == s.size()){
              ans.push_back(curr);
              return ;
          }
       //
             string c= phone[s[st]-'0'];
      // choose
      for (int j = 0; j < c.size(); ++j) {
                  curr+=c[j];
                  backtrack(s,curr,ans,st+1,phone);
                  curr.pop_back();
              }
      }

vector<string> letterCombinations(string digits) {
    // abc def
    int st=0 ;
    string curr="";
    vector<string >ans;
    vector<string> phone = {
            "", "", "abc", "def",
            "ghi", "jkl", "mno",
            "pqrs", "tuv", "wxyz"
    };
    backtrack(digits,curr,ans,st,phone);
    
return ans;
}
};