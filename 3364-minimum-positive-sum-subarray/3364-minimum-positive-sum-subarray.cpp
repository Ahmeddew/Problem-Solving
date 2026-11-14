class Solution {
public:
    int minSubarray(vector<int>nums ,int k){
          int sum=0;
          int ans=INT_MAX;
             for (int j = 0; j < k; j++) {
                 sum += nums[j];
               }
               if (sum > 0 )ans=sum;
               for(int  j= k ;j<nums.size();j++){
                sum+=nums[j];
                sum-=nums[j-k];
                if (sum > 0) 
                ans= min(ans,sum);
               }
               return ans;
    }
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mn=INT_MAX;
        for(int i =l ;i<= r ;i++){
            int res=minSubarray(nums,i); 
             mn = min(mn,res);
        }
        return mn == INT_MAX ? -1 : mn ;
    }
};