public class Solution {
        public int FindLHS(int[] nums) {
            // 1 2 2 2 3 3 5 7
             // 1 1 2 2 
            Array.Sort(nums);
            int l = 0, r , ans = int.MinValue;
            for (r = 1;r < nums.Length; r++)
            {
                
                while (nums[r] - nums[l]  >1  && l<nums.Length)
                {
                    l++;
                }
                 if (nums[r] - nums[l] == 1)
        ans = Math.Max(ans, r - l + 1);
            }

            return Math.Max(ans,0);
        }
    }