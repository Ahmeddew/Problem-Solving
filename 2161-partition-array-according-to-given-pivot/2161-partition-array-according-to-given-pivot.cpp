class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int x) {
          vector<int>left,right,equal ;
          for(int i=0;i < nums.size();i++) {
            if (nums[i] <x )left.push_back(nums[i]);
            else if (nums[i] > x)right.push_back(nums[i]);
            else equal.push_back(nums[i]); 
          }
          vector<int> ans = left;

     ans.insert(ans.end(), equal.begin(), equal.end());
     ans.insert(ans.end(), right.begin(), right.end());

   return ans;
          
    }
};