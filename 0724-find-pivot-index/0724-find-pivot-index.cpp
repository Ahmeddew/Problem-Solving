class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(auto i:nums)sum+=i; 
        int leftsum= 0;
         for(int i=0; i< nums.size() ;i++){
            sum-= nums[i];
            if (sum == leftsum ){
                   return i ;
            }
            leftsum+=nums[i];
        }
        return -1;
    }
};