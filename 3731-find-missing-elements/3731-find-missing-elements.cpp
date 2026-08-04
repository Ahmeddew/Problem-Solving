class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> us;
        vector<int>ans;
    for(auto i :nums)us.insert(i);
         int Min = *min_element(nums.begin(), nums.end());
         int Max = *max_element(nums.begin(), nums.end());
         for(int i=Min ;i<Max;i++){
           if (us.find(i) == us.end()){
            ans.push_back(i);
           }
         }
         return ans;
    }
};