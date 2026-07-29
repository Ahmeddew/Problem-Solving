class Solution {
public:
    bool isAnagram(string s, string t) {
    map<char,int>ss;
    map<char,int>tt;
        for(auto &c  :s)ss[c]++;
        for(auto &c :t)tt[c]++;
        
       for(char c= 'a' ; c <= 'z' ;c++){
        if (ss[c] != tt[c])return false ;
       }
         
      return true ;
    }
};