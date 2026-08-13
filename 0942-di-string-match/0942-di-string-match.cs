 
    
      public class Solution {
          public int[] DiStringMatch(string s)
          {

              List<int> ans = new();
              int D = s.Length, I = 0;
              foreach (var c in s)
              {
                  if (c == 'I')
                  {
                      ans.Add(I++);
                  }
                  else
                  {
                      ans.Add(D--);
                  }
              }
              if (s[s.Length-1] == 'I'){
                ans.Add(D);
              }else ans.Add(I);
              return ans.ToArray();
          }
      }
  
     