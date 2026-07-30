class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0 ,r=nums.size()-1 ,mid,ans=-1;
 while (l<=r) {
     mid= (l+r)/2;
     if ( nums[mid] >  target ){
          r=mid-1;
     }else if (nums[mid] < target ) {
         l=mid+1;
     }else {
           ans= mid ;
        break;
     }
 }
 return   ans  ;
     }
};