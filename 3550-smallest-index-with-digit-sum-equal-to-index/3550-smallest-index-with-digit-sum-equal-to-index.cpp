class Solution {
public:
int sum(int n){
    int ans=0;
 while (n){
 ans+=n%10;
 n/=10;
 }
 return ans;
}

    int smallestIndex(vector<int>& nums) {
        for(int i=0; i< nums.size();i++){
            int sm=sum(nums[i]);
         if (sm == i )return i;
        }
        return -1;
    }
};