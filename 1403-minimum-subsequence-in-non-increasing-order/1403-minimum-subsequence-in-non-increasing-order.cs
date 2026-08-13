public class Solution {
          public IList<int> MinSubsequence(int[] nums) {
            Array.Sort(nums);
            List<int> ans = new List<int>();
            int sum = 0;
            foreach (var i in nums)
            {
                sum += i;
            }

            int a = 0;
            for (int i = nums.Length-1; i >=0; i--)
            {
                a += nums[i];
                if (a > sum - a)
                {
                    ans.Add(nums[i]);
                    break;
                }
                ans.Add(nums[i]);
                
            }

           
            return ans;
          }
      }
      