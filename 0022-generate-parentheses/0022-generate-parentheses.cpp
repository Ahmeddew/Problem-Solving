class Solution {
public:
void generateParenthesis(int n, string& curr, int open, int close,vector<string>&ans) {

    // Base case
    if (curr.size() == 2 * n) {
        ans.push_back(curr);
        return;
    }

    // Add '('
    if (open < n) {
        curr.push_back('(');

        generateParenthesis(n, curr, open + 1, close,ans);

        curr.pop_back();
    }

    // Add ')'
    if (close < open) {
        curr.push_back(')');

        generateParenthesis(n, curr, open, close + 1,ans);

        curr.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        string curr="" ;
   vector<string>ans;
         generateParenthesis(n,curr,0,0,ans);
         return ans;
    }
};