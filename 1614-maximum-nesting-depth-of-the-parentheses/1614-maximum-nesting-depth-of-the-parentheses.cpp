class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,ans=0;
        stack<int>st;
        for(auto c : s){
            if (c == '('){
                st.push(c);
                cnt++;
             ans=max(ans,cnt);

            }else if (c == ')'){
               st.pop( );
               cnt--;
            }
        }
        return ans;
    }
};