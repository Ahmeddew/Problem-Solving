class Solution {
public:
    bool valid(string s){
      int l=0,r=s.size()-1;
      while (l<r){
          if(s[l++]!=s[r--])return false;
      }
      return true;
  }
void solve (string &s,vector<string> &curr,int st,vector<vector<string>>&ans ){
        // base case
        if (st== s.size()){
            ans.push_back(curr);
            return;
        }
      // choose
    for (int i = st; i <s.size() ; ++i) {
        // check substring is palindrome
        string ss = s.substr(st, i - st + 1);
        if (valid(ss)){
            curr.push_back(ss);
            solve (s,curr,i+1,ans);
            // undo
            curr.pop_back();
        }
       

    }
  }
vector<vector<string>> partition(string s) {

vector<string>curr;
vector<vector<string>>ans;
    solve(s,curr,0,ans);
    return ans;
}
};