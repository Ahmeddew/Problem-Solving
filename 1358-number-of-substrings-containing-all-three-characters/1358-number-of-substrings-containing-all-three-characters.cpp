class Solution {  // abcabc
public:
    int numberOfSubstrings(string s) {
        int a=0,b=0,c=0;
        int l=0,ans=0 ;
        for (int r = 0; r <s.size() ; ++r) {
            if (s[r] == 'a')a++;
            else if (s[r] == 'b')b++;
            else c++;
            while (a>=1 && b>=1 && c>=1 ){
                ans+=(s.size())-r;
                if (s[l] == 'a')a--;
                else if (s[l] == 'b')b--;
                else c--;
                l++;
            }

        }
        return ans;
    }
};