public class Solution {
      public IList<bool> KidsWithCandies(int[] candies, int extraCandies)
      {
          List<bool> ans = new ();
           int mx=int.MinValue;
          for (int i = 0; i < candies.Length; i++)
          {
              mx = Math.Max(mx, candies[i]);
              
          }

          foreach (int i in candies)
          {
              if (i+extraCandies >= mx)
              {
                  ans.Add(true);
              }
              else
              {
                  ans.Add(false);
              }
          }

          return ans;
      }
}