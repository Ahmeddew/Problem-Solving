class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count=0; 
        for(int l=0, r=l+2; r<nums.size();l++,r++){
            if (nums[l]+nums[r] == (nums[l+1] *1.0)/2 ){
                count++;
            }
        }
        return count;
    }
};