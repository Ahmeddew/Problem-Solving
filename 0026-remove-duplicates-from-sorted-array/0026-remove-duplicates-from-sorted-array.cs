 public class Solution {
        public int RemoveDuplicates(int[] nums)
        {
            int s = 0;
            for (int r = 0 ; r< nums.Length;)
            {
                while ( r < nums.Length && nums[s] == nums[r] )
                {
                    r++;
                }
                if (r < nums.Length)
                {
                    nums[++s] = nums[r];
                }
            }

            return s+1;
        }
    }