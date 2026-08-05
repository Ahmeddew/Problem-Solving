 public class Solution {
        public int[] Intersection(int[] nums1, int[] nums2)
        {
            Dictionary<int, int> mp = new Dictionary<int, int>();
            List<int> ans = new();
            for (int i = 0; i < nums1.Length; i++)
            {
                if (!mp.ContainsKey(nums1[i]))
               mp[nums1[i]] = 0;

                mp[nums1[i]]++;
            }
            foreach(int i in nums2)
            {
                if (mp.ContainsKey(i))
                {
                    ans.Add(i);
                    mp.Remove(i);
                }
            }

            return ans.ToArray();
        }
    }