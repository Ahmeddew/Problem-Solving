public class Solution
{
    public IList<IList<int>> FindDifference(int[] nums1, int[] nums2)
    {
        HashSet<int> set1 = new(nums1);
        HashSet<int> set2 = new(nums2);

        List<IList<int>> ans = new()
        {
            new List<int>(),
            new List<int>()
        };

        foreach (int x in set1)
        {
            if (!set2.Contains(x))
            {
                ans[0].Add(x);
            }
        }

        foreach (int x in set2)
        {
            if (!set1.Contains(x))
            {
                ans[1].Add(x);
            }
        }

        return ans;
    }
}