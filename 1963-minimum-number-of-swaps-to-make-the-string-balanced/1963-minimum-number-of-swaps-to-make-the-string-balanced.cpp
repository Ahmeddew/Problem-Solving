class Solution {
public:
    int minSwaps(string s) {
        string  t; 
     stack<char>st;
    for (char ch : s) {
        if (ch == '[') {
            st.push(ch);
        } else if (ch == ']') {
            if (st.empty()){
                t+=ch;
                continue;
            }
            st.pop();
        }
    }
     
 return ceil((st.size()*2)/4.0);
    }
};