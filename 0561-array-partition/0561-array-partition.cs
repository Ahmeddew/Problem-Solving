public class Solution {
        public int ArrayPairSum(int[] nums) {
           Array.Sort(nums);
           int ans = 0;
           for (int i = 0; i < nums.Length; i+=2)
           {
               ans += Math.Min(nums[i], nums[i + 1]);
                
           }

           return ans;
        }
    }