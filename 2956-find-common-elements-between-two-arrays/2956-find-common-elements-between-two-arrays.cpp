class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
         int ans1=0,ans2=0;
         unordered_set<int>st1(nums1.begin(),nums1.end()),st2(nums2.begin(),nums2.end());
         for(int  i : nums1){
            if (st2.count(i))ans1++;
         }
         for(int i :nums2){
            if (st1.count(i))ans2++;
         }
         return {ans1,ans2};
    }
};