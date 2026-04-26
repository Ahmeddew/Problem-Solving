class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
    for (int i = 0; i <queries.size() ; ++i) {
     int Maxlen=0,sum=0;
        for (int j = 0; j <nums.size() ; ++j) {
            sum+=nums[j];
            if (sum<= queries[i])Maxlen++;
            else sum-=nums[j];
        }
        ans.push_back(Maxlen);
    }
    return ans;
    }
};