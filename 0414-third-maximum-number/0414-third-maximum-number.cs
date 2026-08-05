public class Solution {
        public int ThirdMax(int[] nums)
        {
            long first = long.MinValue;
            long second = long.MinValue;
           long third = long.MinValue;

            foreach (int num in nums)
            {
                if (num == first || num ==second || num ==third)continue;
                else if (num > first)
                {
                    third = second;
                    second = first;
                    first = num;
                }else if (num > second)
                {
                    third = second;
                    second = num;
                }else if (num > third)
                {
                    third = num;
                }
            }

            return  third == long.MinValue ? (int)first : (int)third;
        }
    }