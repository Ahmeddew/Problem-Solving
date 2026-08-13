class Solution {
public:
int Palindrome(string s){
    int l=0,r=s.size()-1;
    while (l<r){
        if (s[l] != s[r])
        {
        return false ;
            }
        l++,r--;
    }
    return true ;
}
    bool validPalindrome(string s) {
         // abcxacba   
        int l=0,r=s.size()-1;
        string t=s,w=s;
    int x=0,y=0;
    while (l<r){
        if (s[l] != s[r])
        {
        t.erase(l, 1);
        w.erase(r, 1);
        break;
        cout<<w<<endl;
        cout<<t<<endl;
         }
        l++,r--;
    }
     return Palindrome(t)||Palindrome(w);
    }
};