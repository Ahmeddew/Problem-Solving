#include <string>
#include <stack>

class Solution {
public:
    string smallestNumber(string pattern) {
        string result = "";
        stack<char> st;
        
        for (int i = 0; i <= pattern.length(); i++) {
            st.push('1' + i);
            
            // Pop from stack when we hit 'I' or reach the end
            if (i == pattern.length() || pattern[i] == 'I') {
                while (!st.empty()) {
                    result += st.top();
                    st.pop();
                }
            }
        }
        
        return result;
    }
};