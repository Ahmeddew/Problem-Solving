class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int Max=  *max_element(nums.begin(), nums.end());
        long long ans= 0,n=nums.size(),count=0;
        for(int r= 0,l=0;r<nums.size() ;r++){
           if (nums[r] == Max )count++;
            while(count>= k ){
                ans+=n-r;
                if (nums[l] == Max)count--;
                l++;
            }
        }
        return ans;
    }
};