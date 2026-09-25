class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        if (nums.size() == 1)return 0;
      int mn= *min_element(nums.begin(),nums.end());
      int mx= *max_element(nums.begin(),nums.end());
       
         return max(0,(mx-k)-(mn+k));
    } 
};