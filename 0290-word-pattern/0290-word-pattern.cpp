class Solution {
public:
    bool wordPattern(string pattern, string s) {
         
        vector<string> words;

    stringstream ss(s);

    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    if (pattern.size() !=  words.size())return false ; 
    map<char,string>mp1 ;
    map<string,char>mp2;
    for(int i=0 ; i< words.size() ;i++){
            if (mp1.find(pattern[i]) == mp1.end() &&
            mp2.find(words[i]) == mp2.end() 
            || mp2[words[i]] == pattern[i])
            {
                mp1[pattern[i]] = words[i]; 
                mp2[words[i]] = pattern[i];
            }else {
                return false ;
            }
            
        
    }
    return true;

    }
};