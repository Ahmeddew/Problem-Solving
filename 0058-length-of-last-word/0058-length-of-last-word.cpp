class Solution {
public:
    int lengthOfLastWord(string s) {
        bool flag =false ;
        int n= s.size(),ans =0;
        for(int i=n-1 ;i>= 0 ;i--){
            if (s[i] == ' ') {
                if (flag){
                    break;
                }else {
                    continue ;
                }
            }else {
                flag=true;
                ans++;
            }

        }
        return ans;
    }
};