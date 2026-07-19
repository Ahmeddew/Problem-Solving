class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> last(26);
    vector<bool> vis(26, false);
    stack<char>st;

    for (int i=0; i<s.size();i++){
        last[s[i]-'a']=i;
    }
    for (int i=0;i<s.size();i++) {
        if ( vis[s[i]-'a']) continue;
           while ( !st.empty() && st.top() > s[i] && last[st.top()-'a'] >i )   {
               char old=st.top();
               vis[old -'a']=false;
                    st.pop();

           }
               st.push(s[i]);
           vis[s[i]-'a']=true ;


    }
    string ans;
    while (!st.empty()){
        ans+=st.top();
        st.pop();
    }
     reverse(ans.begin(),ans.end());
     return ans;
    }
};