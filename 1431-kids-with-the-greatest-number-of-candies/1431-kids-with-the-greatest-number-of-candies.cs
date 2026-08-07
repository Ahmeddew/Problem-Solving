public class Solution {
      public IList<bool> KidsWithCandies(int[] candies, int extraCandies)
      {
          List<bool> ans = new ();
          int[] arr=new int[candies.Length];
          int mx=int.MinValue;
          for (int i = 0; i < candies.Length; i++)
          {
              mx = Math.Max(mx, candies[i]);
              arr[i] = candies[i] + extraCandies;
          }

          foreach (int i in arr)
          {
              if (i >= mx)
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