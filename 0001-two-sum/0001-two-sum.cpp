class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> a;

        for (int i = 0; i < nums.size(); i++) {
            a.push_back({nums[i], i});
        }
        sort(a.begin(),a.end());
        int i=0,j=nums.size()-1;
         int x,y;
        while (i<j){
             int sum = a[i].first + a[j].first;
            if (sum  == target){
                return {a[i].second, a[j].second};
            }else if (sum >target )j--;
            else i++;
        }
        return {};
    }
};