class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n =nums.size();
        vector<int>positive,negative,ans;
        for(auto i :nums){
            if (i>0 ){
                positive.push_back(i);
            }else negative.push_back(i);
        }
        int idx1=0,idx2=0;
        for(int i=0 ;i<n  ;i++){
         if (i%2 == 0 )ans.push_back(positive[idx1++]);
         else ans.push_back(negative[idx2++]);
        }
        return ans;
    }
};