class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
          unordered_map<int,int>mp;
          mp[0]=1;
          int sum=0,ans=0; 
          for(auto i :arr){
            sum +=i;
             ans+=mp[sum-k ];
             mp[sum]++;

          }
          return ans;
    }
};