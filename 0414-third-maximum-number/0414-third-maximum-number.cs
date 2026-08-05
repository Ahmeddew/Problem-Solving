public class Solution {
    public int ThirdMax(int[] nums) {
        HashSet<int>st=new (nums);
         List<int>ans=new();
         foreach(int i in st){
            ans.Add(i);
         }
         ans.Sort();
         if (ans.Count <3){
            return ans[ans.Count-1];
         }
         return ans[ans.Count-3];
          
    }
}