class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n =nums.size();
        long long ans=0;
          for(auto &i :nums){
            i *=i;
          }
          sort(nums.begin(),nums.end());
      
       // 1 1 4 4 9 9 
      for(int i=0 ;i<n;i++){
      if (i >=n/2)ans+=nums[i];
      else ans-=nums[i];
      }
      return ans;
    }
};