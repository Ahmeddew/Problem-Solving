class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int st=1;
        map<int,int>mp;
        int n=0;
        for(auto i: nums){mp[i]++;
         if (mp[i]>1)n=i;
        }

        for(int i=1; i<=nums.size();i++){
            if (!mp.count(i)){
                return {n,i};
            }
        }
         return {};
    }
};