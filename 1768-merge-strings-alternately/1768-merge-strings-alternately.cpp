class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int Mxsize =max(word1.size(), word2.size());
            string ans = "";
            for (int i = 0; i <Mxsize ; i++)
            {
                  if (i < word1.size()) ans += word1[i];
                  if (i < word2.size()) ans += word2[i];
                  
            }
            
            
            return ans;
    }
};