public class Solution {
    public int MinOperations(int[] nums) {
        int k=0;   
      for(int i=0; i<nums.Length ;i++){
        if (nums[i] == 0 ){
            if (i+2 >= nums.Length)return -1;
            k++;
            for(int j=i ;j<i+3;j++){
                if (nums[j] == 1)nums[j]=0;
                else nums[j]=1;
            }
        }
      }

     return  k;
    }
}