class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         
    int total =0; 
    for(auto &i : nums)total+=i;

    int leftSum=0,rightSum;
    for(int i=0; i< nums.size();i++){
        rightSum= total - leftSum -nums[i];
        if (i == 0 ){
            leftSum= 0; 
        }
        if(i == nums.size()-1) {
             rightSum=0;
        } 
        if (rightSum == leftSum){
            return i;
        }else {
            leftSum+=nums[i];
        }


    }
  return -1;
    }
 };