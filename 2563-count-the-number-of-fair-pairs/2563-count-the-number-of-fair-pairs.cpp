class Solution {
public:

   long long solve(vector<int>&nums,int sum){
       int i=0,j= nums.size()-1;
       long long cnt=0; 
       while(i<j){
        if (nums[i]+nums[j] <= sum ){
            cnt+=j-i;
            i++;
        }else {
            j--;
        }
       }
       return cnt;
   }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
         sort(nums.begin(),nums.end());
         return solve(nums,upper)-solve(nums,lower-1);
    }
};