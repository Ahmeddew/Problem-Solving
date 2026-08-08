class Solution {
public:
bool isVowels(char c) {
    return string("aeiouAEIOU").find(c) != string::npos;
}
    string reverseVowels(string s) {
        string vowels="",ans;
        for(auto &c :s){
         if (isVowels(c)){
            vowels+=c;
         }
         }
         
        int idx=vowels.size()-1;
        for (auto c :s ){
        if (isVowels(c)){
             ans+=vowels[idx--];
        }else {
            ans+=c;
        }
        }
        cout<<vowels;
        return ans;
    }
};