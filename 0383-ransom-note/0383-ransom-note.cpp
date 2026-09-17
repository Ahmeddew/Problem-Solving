class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
         map<char,int>mp1;
         map<char,int>mp2;
         for(char c :magazine)mp2[c]++;
         for(char c :ransomNote)mp1[c]++;

         for(auto &[_,v] :mp1){
            if (v>mp2[_] )return false;
         }
         return true;
    }
};