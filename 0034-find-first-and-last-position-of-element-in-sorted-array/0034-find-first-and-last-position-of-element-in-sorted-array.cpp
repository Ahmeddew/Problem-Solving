class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         auto it = lower_bound(nums.begin(),nums.end(),target) ;
         auto itt = upper_bound(nums.begin(),nums.end(),target) ;
        if ( it != nums.end() && *it == target){
            int s=it-nums.begin(),e=itt-nums.begin()-1;
            return  { s,e};
        }  
        return {-1,-1};
    }
};