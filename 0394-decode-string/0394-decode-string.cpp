class Solution {
public:
    string decodeString(string s) {
        stack<pair<string,int>>st;
     int currNumber=0;
    string currString="";
    for (int i = 0; i <s.size() ; ++i) {
        if (isdigit(s[i])){
            currNumber = currNumber * 10 + (s[i] - '0');
        }else if (isalpha(s[i])){
            currString+=s[i];
        }else if (s[i] == '['){
              st.push({currString, currNumber});
            currString="",currNumber=0;
        }else {
            auto [previousStr,previousNum]=st.top();
            st.pop();
            string decoded = previousStr;
              while(previousNum--){
                  decoded+=currString;
              }
              currString=decoded;
        }


    }
    return currString;
    }
};