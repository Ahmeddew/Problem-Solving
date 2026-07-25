class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         map<int,int>freq;
         bool found=false;
         for(int i=0 ;i<nums.size(); i++){
            if ( freq.count(nums[i])){
            if  (abs(i-freq[nums[i]])<=k){
                found =true;
            }else {
                freq[nums[i]]=i;
            }
            }else {
                 freq[nums[i]]= i;
            }
         }
         return found;
    }
};