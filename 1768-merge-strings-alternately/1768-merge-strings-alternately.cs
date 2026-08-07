public class Solution {
      public string MergeAlternately(string word1, string word2)
      {
            int Mxsize = Math.Max(word1.Length, word2.Length);
            string ans = "";
            for (int i = 0; i <Mxsize ; i++)
            {
                  if (i < word1.Length) ans += word1[i];
                  if (i < word2.Length) ans += word2[i];
                  
            }
            
            
            return ans;
      }
}