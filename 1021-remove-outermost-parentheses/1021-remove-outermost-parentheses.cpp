class Solution {
public:
    string removeOuterParentheses(string s) {
        vector<string>ans;
        stack<int>st;
        string curr;
        for(auto c :s ){
            if (c == '('){st.push(c);
            curr+=c;}
            else{
                 st.pop();
                 curr+=c;
                 if (st.empty()){
                     ans.push_back(curr);
                     curr="";
                 }
            }
        }
        string res;

        for(int i=0; i<ans.size();i++){
           ans[i].erase(0,1);
           ans[i].pop_back();
           res+=ans[i];
        }
      
        return  res;
    }
};