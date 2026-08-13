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
                 ans.Add(nums[i]);
                if (a > sum - a)
                {
                   
                    break;
                }
               
                
            }

           
            return ans;
          }
      }
      