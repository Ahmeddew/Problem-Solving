class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int idxOne,idxN;
        int n= nums.size();
        for(int i=0; i<nums.size();i++){
            if (nums[i]== 1)idxOne=i;
            if (nums[i] == nums.size() )idxN= i;
        }
        return  idxOne > idxN ?( idxOne +(n-idxN-1))-1 :( idxOne +(n-idxN-1)) ;
    }
};